using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public enum UNITTIER
{
    일반 = 0,
    레어 = 1,
    고대 = 2,
    유물 = 3,
    서사 = 4,
    전설 = 5,
    신화 = 6,
    태초 = 7,
}
public enum ATTACKTYPE
{
    폭발형 = 0,
    신비형 = 1,
    관통형 = 2,
}
public abstract class Unit : MonoBehaviour
{
    protected UNITTIER m_Tier;
    protected ATTACKTYPE m_Type;
    protected int m_Damage;
    protected int m_Level;
    protected float m_Range;
    protected float m_AttackDelay;
    protected string m_Name;
    protected Sprite m_Halo;
    protected WaitForSeconds m_AttackDelaySec;

    [SerializeField]
    protected UnitSO m_UnitSO;

    public virtual IEnumerator Attack()
    {
        while (gameObject.activeSelf)
        {
            GameObject monsterObj = Physics2D.OverlapCircle(transform.position, m_Range, LayerMask.GetMask("Monster")).gameObject;

            if (monsterObj != null)
            {
                Monster monster = monsterObj.GetComponent<Monster>();

                monster.OnDamage(m_Type, m_Damage * (m_Level + 1));
            }

            yield return m_AttackDelaySec;
        }
    }
    public void SetStatus(ATTACKTYPE _type,int _index)
    {
        m_Type = _type;
        m_Halo = m_UnitSO.m_Sprites[_index];
        m_Name = m_UnitSO.m_Names[_index];
        m_Damage = m_UnitSO.m_Damage[_index];
    }
    public void Upgrade()
    {
        m_Level++;
    }
}
