using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier5 : Unit
{
    private void OnEnable()
    {
        m_Tier = UNITTIER.Àü¼³;
        m_Level = 0;
        m_Range = 10f;
        m_AttackDelay = 0.4f;
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
