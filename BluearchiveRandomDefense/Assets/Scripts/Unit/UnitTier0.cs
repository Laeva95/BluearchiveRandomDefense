using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier0 : Unit
{
    protected override void OnEnable()
    {
        m_Tier = UNITTIER.¿œπ›;
        m_Range = 4f;
        m_AttackDelay = 1f;
        base.OnEnable();

        StartCoroutine(Attack());
    }
}
