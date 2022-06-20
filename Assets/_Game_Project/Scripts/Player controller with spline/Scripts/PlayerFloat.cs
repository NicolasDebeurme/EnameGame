using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace PlayerController{
    public class PlayerFloat : MonoBehaviour
    {
        //volume of person weighing 65kg and has a height of 175cm
        [SerializeField] float mass = 65f;
        // volume in m³ fully submerged
        [SerializeField] float volume = 0.0643564356435644f;

        [Range(0,1)]
        public float underwaterPercentage = 0.7f;

        private CharacterController characterController;

        //density of water at 1000 kg/m³
        private float liquidDensity = 1000;

        private float R;
        private float H;

        private float subMergedPosition;

        public List<GameObject> waterPlanes = new List<GameObject>();

        private int activePlane;
        private int lastActivePlane = 100;

        public bool previouslyUnderWater;
        public bool underWater;

        private void Start()
        {
                characterController = GetComponent<CharacterController>();
                R = characterController.radius;
                H = characterController.height;

                //volume = (Mathf.PI * Mathf.Pow(R, 2f) * (H - 2 * R)) + (4 / 3 * Mathf.PI * Mathf.Pow(R, 3f));
        }

        private void Update()
        {
            CheckIfStillUnderWater();
        }

        bool CheckIfUnderWater(int waterPlanesCount)
        {
            for (int i = 0; i < waterPlanesCount; i++)
            {
                if (Mathf.Pow((transform.position.x - waterPlanes[i].transform.position.x), 2) + Mathf.Pow((transform.position.z - waterPlanes[i].transform.position.z), 2) < Mathf.Pow(waterPlanes[i].GetComponent<Renderer>().bounds.extents.x, 2))
                {

                    if (activePlane != lastActivePlane)
                    {
                        lastActivePlane = activePlane;
                    }

                    activePlane = i;

                    if (subMergedPosition < waterPlanes[i].transform.position.y)
                    {
                        activePlane = i;
                        return true;
                        //break;
                    }
                }
            }

            return false;
        }

        //<summary>
        //Once underwater, checks if still underwater
        //</summary>
        void CheckIfStillUnderWater()
        {
            subMergedPosition = transform.position.y;
            subMergedPosition -= characterController.height / 2;
            subMergedPosition += characterController.height * underwaterPercentage;

            previouslyUnderWater = underWater;

            if (underWater && Mathf.Pow((transform.position.x - waterPlanes[activePlane].transform.position.x), 2) + Mathf.Pow((transform.position.z - waterPlanes[activePlane].transform.position.z), 2) > Mathf.Pow(waterPlanes[activePlane].GetComponent<Renderer>().bounds.extents.x, 2))
            {
                underWater = false;
            }

            else if (underWater && subMergedPosition > waterPlanes[activePlane].transform.position.y)
            {
                underWater = false;
            }

            else if (!underWater)
            {
                underWater = CheckIfUnderWater(waterPlanes.Count);
            }
        }

        public float SubmergedPercentage()
        {
            float distance = transform.position.y;
            distance -= characterController.height / 2;

            distance = Vector3.Distance(new Vector3(0,waterPlanes[activePlane].transform.position.y), new Vector3(0,distance));

            return Mathf.InverseLerp(0, H, distance);
        }

        public float BuoyancyForce()
        {
            return  (liquidDensity * Mathf.Abs(Physics.gravity.y) * (volume * SubmergedPercentage())) / mass;
        }
    }
}
