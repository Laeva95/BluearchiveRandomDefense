using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitTier4 : Unit
{
    private void OnEnable()
    {
        m_Tier = UNITTIER.¼­»ç;
        m_Range = 7f;
        m_AttackDelay = 0.4f;
        m_AttackDelaySec = new WaitForSeconds(m_AttackDelay);
    }
}
