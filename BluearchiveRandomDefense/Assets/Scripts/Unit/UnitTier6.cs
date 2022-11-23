using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier6 : Unit
{
    private void OnEnable()
    {
        m_Tier = UNITTIER.Ω≈»≠;
        m_Range = 20f;
        m_AttackDelay = 0.2f;
        m_AttackDelaySec = new WaitForSeconds(m_AttackDelay);
    }
    public override IEnumerator Attack()
    {
        while (gameObject.activeSelf)
        {
            Collider2D monsterObj = Physics2D.OverlapCircle(transform.position, m_Range, LayerMask.GetMask("Monster"));

            if (monsterObj != null)
            {
                Collider2D[] monstersObj = Physics2D.OverlapCircleAll(monsterObj.transform.position, 5f, LayerMask.GetMask("Monster"));
                for (int i = 0; i < monstersObj.Length; i++)
                {
                    if (monstersObj[i] != null)
                    {
                        Monster monster = monstersObj[i].GetComponent<Monster>();

                        monster.OnDamage(m_Type, TotalDamage(), m_Tier);
                    }
                }
                GameObject obj = SpawnEffect(m_Type);
                obj.transform.position = monsterObj.transform.position;
            }
            yield return m_AttackDelaySec;
        }
    }
}
