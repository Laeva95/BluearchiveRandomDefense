using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier1 : Unit
{
    private void OnEnable()
    {
        m_Tier = UNITTIER.·¹¾î;
        m_Level = 0;
        m_Range = 4f;
        m_AttackDelay = 0.8f;
        m_AttackDelaySec = new WaitForSeconds(m_AttackDelay);
    }
}
