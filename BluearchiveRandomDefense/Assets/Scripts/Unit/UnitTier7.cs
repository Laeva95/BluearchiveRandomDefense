using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier7 : Unit
{
    WaitForSeconds m_AllAttackDelaySec;
    private void OnEnable()
    {
        m_Tier = UNITTIER.≈¬√ ;
        m_Range = 25f;
        m_AttackDelay = 0.2f;
        m_AttackDelaySec = new WaitForSeconds(m_AttackDelay);
        m_AllAttackDelaySec = new WaitForSeconds(3f);
    }
    public override IEnumerator Attack()
    {
        StartCoroutine(AllAttack());
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

    IEnumerator AllAttack()
    {
        while (gameObject.activeSelf)
        {
            Collider2D[] monstersObj = Physics2D.OverlapCircleAll(transform.position, 25f, LayerMask.GetMask("Monster"));
            for (int i = 0; i < monstersObj.Length; i++)
            {
                if (monstersObj != null)
                {
                    Monster monster = monstersObj[i].GetComponent<Monster>();

                    monster.OnDamage(m_Type, TotalDamage(), m_Tier);
                }
            }
            for (int i = 0; i < 4; i++)
            {
                GameObject obj = SpawnEffect(m_Type);
                switch (i)
                {
                    case 0:
                        obj.transform.position = new Vector3(8, 8);
                        break;
                    case 1:
                        obj.transform.position = new Vector3(-8, 8);
                        break;
                    case 2:
                        obj.transform.position = new Vector3(8, -8);
                        break;
                    case 3:
                        obj.transform.position = new Vector3(-8, -8);
                        break;
                }
            }
            yield return m_AllAttackDelaySec;
        }
    }
}
