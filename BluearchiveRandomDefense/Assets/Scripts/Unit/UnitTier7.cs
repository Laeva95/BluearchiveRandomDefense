using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier7 : Unit
{
    WaitForSeconds m_AllAttackDelaySec;
    protected override void OnEnable()
    {
        m_Tier = UNITTIER.≈¬√ ;
        m_Range = 20f;
        m_AttackDelay = 0.25f;
        base.OnEnable();
        m_AllAttackDelaySec = new WaitForSeconds(2f);

        StartCoroutine(Attack());
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
                bool isKill = false;
                for (int i = 0; i < monstersObj.Length; i++)
                {
                    if (monstersObj[i] != null)
                    {
                        Monster monster = monstersObj[i].GetComponent<Monster>();

                        if (monster.OnDamage(m_Type, TotalDamage(), m_Tier))
                        {
                            m_KillPoint++;
                            isKill = true;
                        }
                    }
                }
                if (isKill && m_UnitManager.m_FocusTile != null)
                {
                    if (m_UnitManager.m_FocusTile.m_Unit == this)
                    {
                        m_UnitManager.UnitTextUpdate();
                    }
                }
                GameObject obj = SpawnEffect(m_Type);
                obj.transform.position = monsterObj.transform.position;

                SoundManager.Instance.SoundPlay(SOUND_NAME.UnitAttack2);

                if (m_UnitManager.m_FocusTile != null)
                {
                    if (m_UnitManager.m_FocusTile.m_Unit != null)
                    {
                        if (m_UnitManager.m_FocusTile.m_Unit != this)
                        {
                            m_Ani.SetTrigger("Attack");
                        }
                    }
                }
                else
                {
                    m_Ani.SetTrigger("Attack");
                }
            }

            yield return m_AttackDelaySec;
        }
    }

    IEnumerator AllAttack()
    {
        yield return m_AllAttackDelaySec;

        while (gameObject.activeSelf)
        {
            Collider2D[] monstersObj = Physics2D.OverlapCircleAll(transform.position, 25f, LayerMask.GetMask("Monster"));
            bool isKill = false;
            for (int i = 0; i < monstersObj.Length; i++)
            {
                if (monstersObj != null)
                {
                    Monster monster = monstersObj[i].GetComponent<Monster>();

                    if (monster.OnDamage(m_Type, TotalDamage(), m_Tier))
                    {
                        m_KillPoint++;
                        isKill = true;
                    }
                }
            }
            if (isKill && m_UnitManager.m_FocusTile != null)
            {
                if (m_UnitManager.m_FocusTile.m_Unit == this)
                {
                    m_UnitManager.UnitTextUpdate();
                }
            }
            for (int i = 0; i < 8; i++)
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
                    case 4:
                        obj.transform.position = new Vector3(-9, 0);
                        break;
                    case 5:
                        obj.transform.position = new Vector3(9, 0);
                        break;
                    case 6:
                        obj.transform.position = new Vector3(0, -9);
                        break;
                    case 7:
                        obj.transform.position = new Vector3(0, 9);
                        break;
                }
            }
            yield return m_AllAttackDelaySec;
        }
    }
}
