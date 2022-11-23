using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SellButton : MonoBehaviour
{
    [SerializeField]
    UnitSpawnManager m_UnitManager;

    private void OnMouseDown()
    {
        if (m_UnitManager.m_FocusTile != null)
        {
            if (m_UnitManager.m_FocusTile.m_Unit == null)
            {
                return;
            }
            
            switch (m_UnitManager.m_FocusTile.m_Unit.GetTier())
            {
                case UNITTIER.�Ϲ�:
                    GameManager.Instance.m_Gold += 15;
                    Destroy(m_UnitManager.m_FocusTile.m_Unit.gameObject);
                    RemoveAtList(m_UnitManager.m_FocusTile.m_Unit.GetAttackType());
                    break;
                case UNITTIER.����:
                    GameManager.Instance.m_Gold += 30;
                    Destroy(m_UnitManager.m_FocusTile.m_Unit.gameObject);
                    RemoveAtList(m_UnitManager.m_FocusTile.m_Unit.GetAttackType());
                    break;
                case UNITTIER.���:
                    GameManager.Instance.m_Gold += 45;
                    Destroy(m_UnitManager.m_FocusTile.m_Unit.gameObject);
                    RemoveAtList(m_UnitManager.m_FocusTile.m_Unit.GetAttackType());
                    break;
                case UNITTIER.����:
                    GameManager.Instance.m_Gold += 80;
                    Destroy(m_UnitManager.m_FocusTile.m_Unit.gameObject);
                    RemoveAtList(m_UnitManager.m_FocusTile.m_Unit.GetAttackType());
                    break;
                case UNITTIER.����:
                    GameManager.Instance.m_Gold += 150;
                    Destroy(m_UnitManager.m_FocusTile.m_Unit.gameObject);
                    RemoveAtList(m_UnitManager.m_FocusTile.m_Unit.GetAttackType());
                    break;
                case UNITTIER.����:
                case UNITTIER.��ȭ:
                case UNITTIER.����:
                    Debug.Log("���� ��� �̻��� �Ǹ��� �� �����ϴ�!");
                    break;
                default:
                    break;
            }
            if (m_UnitManager.m_FocusMonster != null)
            {
                m_UnitManager.m_FocusMonster.m_FocusObj.SetActive(false);
            }
            m_UnitManager.FocusTileSelect(null);
            m_UnitManager.m_UnitSet.SetActive(false);
            GameManager.Instance.GoldTextUpdate();
        }
    }
    void RemoveAtList(ATTACKTYPE _type)
    {
        switch (m_UnitManager.m_FocusTile.m_Unit.GetAttackType())
        {
            case ATTACKTYPE.������:
                m_UnitManager.m_Type0Unit.Remove(m_UnitManager.m_FocusTile.m_Unit);
                break;
            case ATTACKTYPE.�ź���:
                m_UnitManager.m_Type1Unit.Remove(m_UnitManager.m_FocusTile.m_Unit);
                break;
            case ATTACKTYPE.������:
                m_UnitManager.m_Type2Unit.Remove(m_UnitManager.m_FocusTile.m_Unit);
                break;
        }
    }
}
