using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier4 : Unit
{
    protected override void OnEnable()
    {
        m_Tier = UNITTIER.¼­»ç;
        m_Range = 7f;
        m_AttackDelay = 0.5f;
        base.OnEnable();

        StartCoroutine(Attack());
    }
}
