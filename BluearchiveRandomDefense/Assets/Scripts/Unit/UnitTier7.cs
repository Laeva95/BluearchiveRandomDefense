using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier7 : Unit
{
    private void OnEnable()
    {
        m_Tier = UNITTIER.≈¬√ ;
        m_Level = 0;
        m_Range = 25f;
        m_AttackDelay = 0.2f;
        m_AttackDelaySec = new WaitForSeconds(m_AttackDelay);
    }
    public override IEnumerator Attack()
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
}
