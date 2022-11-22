using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "UnitSO", menuName = "Scriptable Object/Unit")]
public class UnitSO : ScriptableObject
{
    public Sprite[] m_Sprites;
    public string[] m_Names;
    public int[] m_Damages;
}
