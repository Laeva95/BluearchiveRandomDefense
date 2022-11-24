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
            case ATTACKTYPE.������:
                m_UnitManager.m_Type0Unit.Remove(_unit);
                break;
            case ATTACKTYPE.�ź���:
                m_UnitManager.m_Type1Unit.Remove(_unit);
                break;
            case ATTACKTYPE.������:
                m_UnitManager.m_Type2Unit.Remove(_unit);
                break;
        }
    }
    public void CheckSellUnitTier(Unit _unit)
    {
        switch (_unit.GetTier())
        {
            case UNITTIER.�Ϲ�:
                GameManager.Instance.m_Gold += 15;
                Destroy(_unit.gameObject);
                RemoveAtList(_unit.GetAttackType(), _unit);
                break;
            case UNITTIER.����:
                GameManager.Instance.m_Gold += 30;
                Destroy(_unit.gameObject);
                RemoveAtList(_unit.GetAttackType(), _unit);
                break;
            case UNITTIER.���:
                GameManager.Instance.m_Gold += 45;
                Destroy(_unit.gameObject);
                RemoveAtList(_unit.GetAttackType(), _unit);
                break;
            case UNITTIER.����:
                GameManager.Instance.m_Gold += 80;
                Destroy(_unit.gameObject);
                RemoveAtList(_unit.GetAttackType(), _unit);
                break;
            case UNITTIER.����:
                GameManager.Instance.m_Gold += 150;
                Destroy(_unit.gameObject);
                RemoveAtList(_unit.GetAttackType(), _unit);
                break;
            case UNITTIER.����:
            case UNITTIER.��ȭ:
            case UNITTIER.����:
                break;
            default:
                break;
        }
    }
}
