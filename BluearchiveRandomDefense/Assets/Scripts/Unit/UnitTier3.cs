using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier3 : Unit
{
    private void OnEnable()
    {
        m_Tier = UNITTIER.À¯¹°;
        m_Range = 6f;
        m_AttackDelay = 0.6f;
        m_AttackDelaySec = new WaitForSeconds(m_AttackDelay);
    }
}
