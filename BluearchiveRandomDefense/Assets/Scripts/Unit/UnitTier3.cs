using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier3 : Unit
{
    protected override void OnEnable()
    {
        m_Tier = UNITTIER.����;
        m_Range = 7f;
        m_AttackDelay = 0.5f;
        base.OnEnable();

        StartCoroutine(Attack());
    }
}
