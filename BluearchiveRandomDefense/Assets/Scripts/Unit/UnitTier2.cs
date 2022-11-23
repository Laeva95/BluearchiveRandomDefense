using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier2 : Unit
{
    private void OnEnable()
    {
        m_Tier = UNITTIER.°í´ë;
        m_Range = 5f;
        m_AttackDelay = 0.6f;
        m_AttackDelaySec = new WaitForSeconds(m_AttackDelay);
    }
}
