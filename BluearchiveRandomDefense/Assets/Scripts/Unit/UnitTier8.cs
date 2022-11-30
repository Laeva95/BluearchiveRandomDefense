using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier8 : Unit
{
    protected override void OnEnable()
    {
        m_Tier = UNITTIER.����;
        m_Range = 10f;
        m_AttackDelay = 0.25f;
        base.OnEnable();

        StartCoroutine(Attack());
    }

    public void OnBuffSkill(ATTACKTYPE _type)
    {
        switch (_type)
        {
            case ATTACKTYPE.������:
                break;
            case ATTACKTYPE.�ź���:
                break;
            case ATTACKTYPE.������:
                break;
        }
    }
}
