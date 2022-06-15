using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Events;
using System;
using UnityEngine.Audio;
using System.Collections.Generic;
using System.Linq;

namespace LoadHandling
{
    [Serializable]
    public class SceneData
    {
        public string name = "SceneLabels";
        public List<string> labels;
        public int index = 0;
        public Transform startTransform;

        public static bool operator true(SceneData x)
        {
            if (x.name != "" && x.labels != null)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        public static bool operator false(SceneData x)
        {
            if (x.name == "" || x.labels == null)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        public static implicit operator bool(SceneData exists)
        {
            return exists != null && exists.name != "" && exists.labels != null;
        }
    }

    public class LoadingManager : MonoBehaviour
    {
        public static LoadingManager Instance
        {
            get; private set;
        }

        public int initialSceneIndex = 0;

        public List<SceneData> scenes = new List<SceneData>();

        public Scene ActiveScene
        {
            get; private set;
        }

        public bool CurrentlyLoading { get; private set; } = false;
        public bool LoadSequenceFinished { get; private set; } = false;
        public bool AddressablesLoaded { get; private set; } = false;
        public bool LoadingScreen { get; private set; } = true;

        public AudioMixerSnapshot Silence;

        public UnityEvent OnStartLoadingSequence;
        public OnActiveSceneChanged OnActiveSceneChanged;
        public OnSceneUnloaded OnSceneUnloaded;
        public OnSceneLoaded OnSceneLoaded;
        public UnityEvent OnAddressablesUnloaded;
        public UnityEvent OnAddressablesLoaded;
        public OnFinishLoadingSequence OnFinishLoadingSequence;
        public UnityEvent OnNoChange;

        private bool _manualLoadFinish = false;

        #region Unity Methods

        private void Awake()
        {
            if (Instance == null)
            {
                Instance = this;
                DontDestroyOnLoad(gameObject);
            }
            else if (Instance != this)
            {
                Destroy(gameObject);
            }

            SceneManager.GetSceneByBuildIndex(1);
        }

        private void OnEnable()
        {
            SceneManager.activeSceneChanged += ActiveSceneChanged;
            SceneManager.sceneLoaded += SceneLoaded;
            SceneManager.sceneUnloaded += SceneUnloaded;
        }

        private void OnDisable()
        {
            SceneManager.activeSceneChanged -= ActiveSceneChanged;
            SceneManager.sceneLoaded -= SceneLoaded;
            SceneManager.sceneUnloaded -= SceneUnloaded;
        }

        #endregion

        #region Private Methods

        /// <summary> Method called by the SceneManager.activeSceneChanged UnityAction </summary>
        /// <param name="current"> Replaced Scene </param>
        /// <param name="next"> Next Scene </param>
        private void ActiveSceneChanged(Scene current, Scene next)
        {
            if (OnActiveSceneChanged == null)
                return;
            OnActiveSceneChanged.Invoke(current, next);
        }

        /// <summary> Method called by the SceneManager.sceneLoaded UnityAction </summary>
        /// <param name="scene"> Loaded Scene </param>
        /// <param name="mode"> LoadSceneMode used to load the scene </param>
        private void SceneLoaded(Scene scene, LoadSceneMode mode)
        {
            if (scene.buildIndex == 0)
            {
                StartLoadingSequence(initialSceneIndex, false);
                return;
            }
            else
            {
                ActiveScene = scene;

                SceneManager.SetActiveScene(scene);
            }

            if (OnSceneLoaded == null)
                return;
            OnSceneLoaded.Invoke(scene, mode);
        }

        /// <summary> Method called by the SceneManager.sceneUnloaded UnityAction </summary>
        /// <param name="unloadedScene"> Unloaded Scene</param>
        private void SceneUnloaded(Scene unloadedScene)
        {
            if (OnSceneUnloaded == null)
                return;
            OnSceneUnloaded.Invoke(unloadedScene);
        }

        #endregion

        public void HandleLoadingScreen(Single screen)
        {
            if (screen > 0 && !LoadingScreen)
            {
                LoadingScreen = true;
            }
            else
            {
                LoadingScreen = false;
            }
        }

        public void StartLoadingSequence(int sceneIndex)
        {
            StartLoadingSequence(sceneIndex, false);
        }

        public void StartLoadingSequence(int sceneIndex, bool manualLoadFinish = false)
        {
            //Debug.Log((new System.Diagnostics.StackTrace()).GetFrame(1).GetMethod().Name);
            if (!CurrentlyLoading)
            {
                SceneData scene = scenes.FirstOrDefault(item => item.index == sceneIndex);
                SceneData oldScene = scenes.FirstOrDefault(item => item.index == ActiveScene.buildIndex);

                if (scene != null)
                {
                    if (oldScene != null)
                    {
                        if (scene.index == oldScene.index)
                        {
                            OnNoChange.Invoke();
                            return;
                        }
                    }

                    _manualLoadFinish = manualLoadFinish;
                    LoadSequenceFinished = false;
                    AddressablesLoaded = false;
                    CurrentlyLoading = true;
                    OnStartLoadingSequence.Invoke();
                    if (Silence != null)
                        Silence.TransitionTo(0.1f);

                    StartCoroutine(LoadScene(scene, oldScene));

                    if (!_manualLoadFinish)
                    {
                        StartCoroutine(LoadEnder());
                    }
                }
                else
                {
                    OnNoChange.Invoke();
                }
            }
        }

        public void EndLoadingManual()
        {
            if (_manualLoadFinish)
            {
                StartCoroutine(LoadEnder());
            }
        }

        IEnumerator LoadEnder()
        {
            yield return new WaitUntil(() => LoadSequenceFinished && AddressablesLoaded);

            Debug.Log("Garbage Collection...");
            System.GC.Collect();

            Debug.Log("Unloading...");
            AsyncOperation resourceUnloader = Resources.UnloadUnusedAssets();

            while (!resourceUnloader.isDone)
            {
                yield return null;
            }

            Debug.Log("Finishing loading sequence");
            SceneData currentScene = scenes.FirstOrDefault(item => item.index == ActiveScene.buildIndex);

            if (currentScene && CreatedAssets.AssetDictionary.TryGetValue(string.Join("_", currentScene.labels), out AssetObject assetObject))
            {
                GameObject parentObject = assetObject.parent;

                if (parentObject)
                {
                    SceneManager.MoveGameObjectToScene(parentObject, ActiveScene);
                }
            }

            if (AwesomeTechnologies.VegetationStudio.VegetationStudioManager.Instance)
            {
                //AwesomeTechnologies.VegetationStudio.VegetationStudioManager.Instance.gameObject.SetActive(false);
                //AwesomeTechnologies.VegetationStudio.VegetationStudioManager.Instance.gameObject.SetActive(true);
            }

            OnFinishLoadingSequence.Invoke(ActiveScene);

            CurrentlyLoading = false;

            yield break;
        }

        async void LoadAddressables(SceneData scene, SceneData oldScene = null)
        {

            if (oldScene != null && oldScene.labels.Count > 0)
            {
                await CreatedAssets.ClearAssets(oldScene.labels, scene.labels);
            }
            else
            {
                await CreatedAssets.CreateAndWaitUntilCompleted(scene.labels);
            }

            OnAddressablesUnloaded.Invoke();

            OnAddressablesLoaded.Invoke();

            if (CreatedAssets.AssetDictionary.TryGetValue(string.Join("_", scene.labels), out AssetObject assetObject))
            {
                GameObject parentObject = assetObject.parent;

                if (parentObject)
                {
                    SceneManager.MoveGameObjectToScene(parentObject, SceneManager.GetSceneAt(0));
                }
            }

            AddressablesLoaded = true;
        }

        IEnumerator LoadScene(SceneData scene, SceneData oldScene)
        {
            yield return new WaitForSeconds(5);

            if (ActiveScene.isLoaded)
            {
                AsyncOperation sceneUnloadOperation = SceneManager.UnloadSceneAsync(ActiveScene);

                while (!sceneUnloadOperation.isDone)
                {
                    yield return null;
                }
            }

            yield return null;

            AsyncOperation sceneLoadOperation = SceneManager.LoadSceneAsync(scene.index, LoadSceneMode.Additive);

            while (!sceneLoadOperation.isDone)
            {
                yield return null;
            }

            LoadSequenceFinished = true;

            LoadAddressables(scene, oldScene);

            yield break;
        }
    }
}