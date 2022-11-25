using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier1 : Unit
{
    protected override void OnEnable()
    {
        m_Tier = UNITTIER.·¹¾î;
        m_Range = 5f;
        m_AttackDelay = 1f;
        base.OnEnable();

        StartCoroutine(Attack());
    }
}
