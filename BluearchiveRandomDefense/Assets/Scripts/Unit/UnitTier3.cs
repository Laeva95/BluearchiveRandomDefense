using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier3 : Unit
{
    private void OnEnable()
    {
        m_Tier = UNITTIER.À¯¹°;
        m_Level = 0;
        m_Range = 10f;
        m_AttackDelay = 0.6f;
        m_AttackDelaySec = new WaitForSeconds(m_AttackDelay);
    }
}
