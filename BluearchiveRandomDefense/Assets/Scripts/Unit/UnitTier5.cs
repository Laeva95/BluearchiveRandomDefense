using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier5 : Unit
{
    protected override void OnEnable()
    {
        m_Tier = UNITTIER.????;
        m_Range = 8f;
        m_AttackDelay = 0.33f;
        base.OnEnable();

        StartCoroutine(Attack());
    }

    public override IEnumerator Attack()
    {
        while (gameObject.activeSelf)
        {
            Collider2D monsterObj = Physics2D.OverlapCircle(transform.position, m_Range, LayerMask.GetMask("Monster"));

            if (monsterObj != null)
            {
                Collider2D[] monstersObj = Physics2D.OverlapCircleAll(monsterObj.transform.position, 5f, LayerMask.GetMask("Monster"));
                bool isKill = false;

                if (GameManager.Instance.m_IsEffect < 2)
                {
                    GameObject obj = SpawnEffect(m_Type);
                    obj.transform.position = monsterObj.transform.position;
                }

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
}
