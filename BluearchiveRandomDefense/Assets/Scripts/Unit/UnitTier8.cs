using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier8 : Unit
{
    protected override void OnEnable()
    {
        m_Tier = UNITTIER.고유;
        m_Range = 10f;
        m_AttackDelay = 0.25f;
        base.OnEnable();

        StartCoroutine(Attack());
    }

    public void OnBuffSkill(ATTACKTYPE _type)
    {
        switch (_type)
        {
            case ATTACKTYPE.폭발형:
                break;
            case ATTACKTYPE.신비형:
                break;
            case ATTACKTYPE.관통형:
                break;
        }
    }
}
