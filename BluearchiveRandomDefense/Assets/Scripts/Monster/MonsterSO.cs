using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "MonsterSO", menuName = "Scriptable Object/Monster")]
public class MonsterSO : ScriptableObject
{
    public int[] m_HP;
    public int[] m_Armor;
    public int[] m_Gold;
    public float[] m_MoveSpeed;
    public ARMORTYPE[] m_type;
    public bool[] m_IsBoss;
}
