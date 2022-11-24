using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SellButton : MonoBehaviour
{
    [SerializeField]
    UnitSpawnManager m_UnitManager;

    public void SellUnitBtn()
    {
        if (m_UnitManager.m_FocusTile != null)
        {
            if (m_UnitManager.m_FocusTile.m_Unit == null)
            {
                return;
            }

            CheckSellUnitTier(m_UnitManager.m_FocusTile.m_Unit);

            if (m_UnitManager.m_FocusMonster != null)
            {
                m_UnitManager.m_FocusMonster.OnFocusMonster(false);
            }
            m_UnitManager.m_FocusTile.m_Unit.OnFocusUnit(false);
            m_UnitManager.FocusTileSelect(null);
            m_UnitManager.m_UnitSet.SetActive(false);
            GameManager.Instance.GoldTextUpdate();
        }
    }
    void RemoveAtList(ATTACKTYPE _type, Unit _unit)
    {
        switch (_unit.GetAttackType())
        {
            case ATTACKTYPE.폭발형:
                m_UnitManager.m_Type0Unit.Remove(_unit);
                break;
            case ATTACKTYPE.신비형:
                m_UnitManager.m_Type1Unit.Remove(_unit);
                break;
            case ATTACKTYPE.관통형:
                m_UnitManager.m_Type2Unit.Remove(_unit);
                break;
        }
    }
    public void CheckSellUnitTier(Unit _unit)
    {
        switch (_unit.GetTier())
        {
            case UNITTIER.일반:
                GameManager.Instance.m_Gold += 15;
                Destroy(_unit.gameObject);
                RemoveAtList(_unit.GetAttackType(), _unit);
                break;
            case UNITTIER.레어:
                GameManager.Instance.m_Gold += 30;
                Destroy(_unit.gameObject);
                RemoveAtList(_unit.GetAttackType(), _unit);
                break;
            case UNITTIER.고대:
                GameManager.Instance.m_Gold += 45;
                Destroy(_unit.gameObject);
                RemoveAtList(_unit.GetAttackType(), _unit);
                break;
            case UNITTIER.유물:
                GameManager.Instance.m_Gold += 80;
                Destroy(_unit.gameObject);
                RemoveAtList(_unit.GetAttackType(), _unit);
                break;
            case UNITTIER.서사:
                GameManager.Instance.m_Gold += 150;
                Destroy(_unit.gameObject);
                RemoveAtList(_unit.GetAttackType(), _unit);
                break;
            case UNITTIER.전설:
            case UNITTIER.신화:
            case UNITTIER.태초:
                break;
            default:
                break;
        }
    }
}
