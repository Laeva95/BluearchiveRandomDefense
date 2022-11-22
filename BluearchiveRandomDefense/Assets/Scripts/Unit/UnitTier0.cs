using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier0 : Unit
{
    private void OnEnable()
    {
        m_Tier = UNITTIER.¿œπ›;
        m_Level = 0;
        m_Range = 6f;
        m_AttackDelay = 1f;
        m_AttackDelaySec = new WaitForSeconds(m_AttackDelay);
    }
}
