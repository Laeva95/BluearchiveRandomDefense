using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier1 : Unit
{
    private void OnEnable()
    {
        m_Tier = UNITTIER.·¹¾î;
        m_Range = 5f;
        m_AttackDelay = 1f;
        m_AttackDelaySec = new WaitForSeconds(m_AttackDelay);

        StartCoroutine(Attack());
    }
}
