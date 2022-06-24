using Niantic.ARDK.LocationService;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enums : MonoBehaviour
{
    public enum Roles
    {
        None,
        Alchemist,
        RandomMan
    }
    public enum Places
    {
        None,
        Entrance,
        Sitting_Bench,
        Pilori,
        Pharmacy,
        Abbey_Courtyard,
        Harbour,
        Saint_Anthony_Inn,
    }
    public static Dictionary<Places, LatLng> Places_Coord = new Dictionary<Places, LatLng>()
    {
            { Places.Entrance, new LatLng(50.85489842073291, 3.6332635527581507) },
            { Places.Sitting_Bench, new LatLng(50.85482528474409, 3.6331359651977344) },
            { Places.Pilori, new LatLng(50.85590743106637, 3.6308532628293415) },
            { Places.Pharmacy, new LatLng(50.857251951289, 3.6288604472930386) },
            { Places.Abbey_Courtyard, new LatLng(50.857533851254146, 3.6285948551138647) },
            { Places.Harbour, new LatLng(50.856879291947685, 3.6283492514278017) },
            { Places.Saint_Anthony_Inn, new LatLng(50.85595124969899, 3.6299580413430137) }
    };

    public enum BrodcastType
    {
        None,
        ChoiceInfo,
        NextState,
        PlayerDictionnary
    }

    public enum TypeOfChoice
    {
        Default,
        HasSwap,
        HasDenounce,
        HasShoot
    }
    public enum LobbyButton
    {
        Join,
        Create,
        Leave
    }

    public enum ItemType
    {
        Pistol,
        Jar
    }
}
