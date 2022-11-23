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
                case UNITTIER.일반:
                    GameManager.Instance.m_Gold += 15;
                    Destroy(m_UnitManager.m_FocusTile.m_Unit.gameObject);
                    RemoveAtList(m_UnitManager.m_FocusTile.m_Unit.GetAttackType());
                    break;
                case UNITTIER.레어:
                    GameManager.Instance.m_Gold += 30;
                    Destroy(m_UnitManager.m_FocusTile.m_Unit.gameObject);
                    RemoveAtList(m_UnitManager.m_FocusTile.m_Unit.GetAttackType());
                    break;
                case UNITTIER.고대:
                    GameManager.Instance.m_Gold += 45;
                    Destroy(m_UnitManager.m_FocusTile.m_Unit.gameObject);
                    RemoveAtList(m_UnitManager.m_FocusTile.m_Unit.GetAttackType());
                    break;
                case UNITTIER.유물:
                    GameManager.Instance.m_Gold += 80;
                    Destroy(m_UnitManager.m_FocusTile.m_Unit.gameObject);
                    RemoveAtList(m_UnitManager.m_FocusTile.m_Unit.GetAttackType());
                    break;
                case UNITTIER.서사:
                    GameManager.Instance.m_Gold += 150;
                    Destroy(m_UnitManager.m_FocusTile.m_Unit.gameObject);
                    RemoveAtList(m_UnitManager.m_FocusTile.m_Unit.GetAttackType());
                    break;
                case UNITTIER.전설:
                case UNITTIER.신화:
                case UNITTIER.태초:
                    Debug.Log("전설 등급 이상은 판매할 수 없습니다!");
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
            case ATTACKTYPE.폭발형:
                m_UnitManager.m_Type0Unit.Remove(m_UnitManager.m_FocusTile.m_Unit);
                break;
            case ATTACKTYPE.신비형:
                m_UnitManager.m_Type1Unit.Remove(m_UnitManager.m_FocusTile.m_Unit);
                break;
            case ATTACKTYPE.관통형:
                m_UnitManager.m_Type2Unit.Remove(m_UnitManager.m_FocusTile.m_Unit);
                break;
        }
    }
}
