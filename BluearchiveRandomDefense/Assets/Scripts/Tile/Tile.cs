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
        m_UnitManager.FocusTileSelect(this);
        if (m_Unit == null)
        {
            GameObject obj =  m_UnitManager.SpawnUnit();
            obj.transform.position = transform.position;
            m_Unit = obj.GetComponent<Unit>();
        }
        else
        {
            Debug.Log("Already Has Unit!");
        }
    }
}
