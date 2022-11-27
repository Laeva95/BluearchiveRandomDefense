using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SellButton : MonoBehaviour
{
    UnitSpawnManager m_UnitManager;
    TextAlarmManager m_TextAlarm;

    private void Awake()
    {
        m_UnitManager = FindObjectOfType<UnitSpawnManager>();
        m_TextAlarm = FindObjectOfType<TextAlarmManager>();
    }
    public void SellUnitBtn()
    {
        if (m_UnitManager.m_FocusTile != null)
        {
            if (m_UnitManager.m_FocusTile.m_Unit == null)
            {
                return;
            }
            if ((int)m_UnitManager.m_FocusTile.m_Unit.GetTier() >= (int)UNITTIER.����)
            {
                return;
            }

            string tierColor = m_UnitManager.TierTextColorSelect(m_UnitManager.m_FocusTile.m_Unit.GetTier());
            string typeColor = m_UnitManager.TypeTextColorSelect(m_UnitManager.m_FocusTile.m_Unit.GetAttackType());
            string alarm = $"<color=red>�Ǹ�:</color> <color={tierColor}>{m_UnitManager.m_FocusTile.m_Unit.GetTierText()}</color> <color={typeColor}>{m_UnitManager.m_FocusTile.m_Unit.GetNameText()}</color>";

            int gold = CheckSellUnitTier(m_UnitManager.m_FocusTile.m_Unit);

            m_TextAlarm.AlarmTextUpdate(alarm + $" <color=#0080ff>+{gold}</color>");

            if (m_UnitManager.m_FocusMonster != null)
            {
                m_UnitManager.m_FocusMonster.OnFocusMonster(false);
            }

            if (m_UnitManager.m_FocusTile.m_Unit != null)
            {
                m_UnitManager.m_FocusTile.m_Unit.OnFocusUnit(false);
            }
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
    public int CheckSellUnitTier(Unit _unit)
    {
        int gold = 0;
        switch (_unit.GetTier())
        {
            case UNITTIER.�Ϲ�:
                gold = 15;
                RemoveAtList(_unit.GetAttackType(), _unit);
                _unit.GetTile().m_Unit = null;
                ObjectPoolingManager.Instance.InsertQueue(_unit.gameObject, ObjectPoolingManager.m_Unit00Key);
                break;
            case UNITTIER.����:
                gold = 25;
                RemoveAtList(_unit.GetAttackType(), _unit);
                _unit.GetTile().m_Unit = null;
                ObjectPoolingManager.Instance.InsertQueue(_unit.gameObject, ObjectPoolingManager.m_Unit01Key);
                break;
            case UNITTIER.���:
                gold = 40;
                RemoveAtList(_unit.GetAttackType(), _unit);
                _unit.GetTile().m_Unit = null;
                ObjectPoolingManager.Instance.InsertQueue(_unit.gameObject, ObjectPoolingManager.m_Unit02Key);
                break;
            case UNITTIER.����:
                gold = 75;
                RemoveAtList(_unit.GetAttackType(), _unit);
                _unit.GetTile().m_Unit = null;
                ObjectPoolingManager.Instance.InsertQueue(_unit.gameObject, ObjectPoolingManager.m_Unit03Key);
                break;
            case UNITTIER.����:
                gold = 100;
                RemoveAtList(_unit.GetAttackType(), _unit);
                _unit.GetTile().m_Unit = null;
                ObjectPoolingManager.Instance.InsertQueue(_unit.gameObject, ObjectPoolingManager.m_Unit04Key);
                break;
            case UNITTIER.����:
            case UNITTIER.��ȭ:
            case UNITTIER.����:
                break;
            default:
                break;
        }
        GameManager.Instance.m_Gold += gold;

        return gold;
    }
    bool CheckChangeUnit(Unit _unit, ref int _tier)
    {
        bool isChange = false;
        switch (_unit.GetTier())
        {
            case UNITTIER.�Ϲ�:
            case UNITTIER.����:
            case UNITTIER.���:
            case UNITTIER.����:
            case UNITTIER.����:
                isChange = false;
                break;
            case UNITTIER.����:
                if (GameManager.Instance.m_Gold >= 500)
                {
                    GameManager.Instance.m_Gold -= 500;
                    isChange = true;
                    _tier = (int)UNITTIER.����;
                    RemoveAtList(_unit.GetAttackType(), _unit);
                    _unit.GetTile().m_Unit = null;
                    ObjectPoolingManager.Instance.InsertQueue(_unit.gameObject, ObjectPoolingManager.m_Unit05Key);
                }
                break;
            case UNITTIER.��ȭ:
                if (GameManager.Instance.m_Gold >= 750)
                {
                    GameManager.Instance.m_Gold -= 750;
                    isChange = true;
                    _tier = (int)UNITTIER.��ȭ;
                    RemoveAtList(_unit.GetAttackType(), _unit);
                    _unit.GetTile().m_Unit = null;
                    ObjectPoolingManager.Instance.InsertQueue(_unit.gameObject, ObjectPoolingManager.m_Unit06Key);
                }
                break;
            case UNITTIER.����:
                isChange = false;
                break;
        }
        return isChange;
    }
    public void ChangeUnitBtn()
    {
        if (m_UnitManager.m_FocusTile != null)
        {
            if (m_UnitManager.m_FocusTile.m_Unit == null)
            {
                return;
            }

            int tier = 0;

            if (!CheckChangeUnit(m_UnitManager.m_FocusTile.m_Unit, ref tier))
            {
                return;
            }

            if (m_UnitManager.m_FocusMonster != null)
            {
                m_UnitManager.m_FocusMonster.OnFocusMonster(false);
            }

            m_UnitManager.m_FocusTile.SpawnUnit(tier);
            m_UnitManager.m_FocusTile.m_Unit.OnFocusUnit(true);
            m_UnitManager.FocusTileSelect(m_UnitManager.m_FocusTile);
            m_UnitManager.m_UnitSet.SetActive(true);
            m_UnitManager.UnitTextUpdate();
            GameManager.Instance.GoldTextUpdate();
        }
    }
}
