using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier6 : Unit
{
    protected override void OnEnable()
    {
        m_Tier = UNITTIER.Ω≈»≠;
        m_Range = 20f;
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
                m_Ani.SetTrigger("Attack");
            }

            yield return m_AttackDelaySec;
        }
    }
}
