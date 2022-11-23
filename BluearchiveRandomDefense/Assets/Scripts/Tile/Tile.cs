using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tile : MonoBehaviour
{
    public Unit m_Unit = null;
    UnitSpawnManager m_UnitManager;

    private void Awake()
    {
        m_UnitManager = FindObjectOfType<UnitSpawnManager>();
    }

    private void OnMouseDown()
    {
        if (m_UnitManager.m_FocusMonster != null)
        {
            m_UnitManager.m_FocusMonster.m_FocusObj.SetActive(false);
        }
        m_UnitManager.m_MonsterSet.SetActive(false);
        if (m_UnitManager.m_FocusTile == null)
        {
            if (m_Unit != null)
            {
                m_UnitManager.FocusTileSelect(this);
                m_UnitManager.m_UnitSet.SetActive(true);
                m_UnitManager.UnitTextUpdate();
            }
            else
            {
                if (GameManager.Instance.m_Gold >= 75)
                {
                    GameManager.Instance.m_Gold -= 75;
                    GameManager.Instance.GoldTextUpdate();
                    SpawnUnit();
                }
            }
        }
        else
        {
            if (m_UnitManager.m_FocusTile == this)
            {
                m_UnitManager.FocusTileSelect(null);
                m_UnitManager.m_UnitSet.SetActive(false);
            }
            else
            {
                if (m_UnitManager.m_FocusTile.m_Unit != null)
                {
                    SwapUnit();
                }
            }
        }
    }
    void SpawnUnit()
    {
        GameObject obj = m_UnitManager.SpawnUnit();
        obj.transform.position = transform.position;
        m_Unit = obj.GetComponent<Unit>();
    }
    void SwapUnit()
    {
        Unit unit = m_UnitManager.m_FocusTile.m_Unit;
        if (m_Unit != null)
        {
            m_UnitManager.m_FocusTile.m_Unit = m_Unit;
            m_UnitManager.m_FocusTile.m_Unit.transform.position = m_UnitManager.m_FocusTile.transform.position;
        }
        else
        {
            m_UnitManager.m_FocusTile.m_Unit = null;
        }
        m_Unit = unit;
        m_Unit.transform.position = transform.position;
        m_UnitManager.FocusTileSelect(null);
        m_UnitManager.m_UnitSet.SetActive(false);
    }
}
