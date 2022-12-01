using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class CheatManager : MonoBehaviour
{
    [SerializeField]
    GameObject m_CheatObj;
    [SerializeField]
    GameObject m_CheatSetObj;

    [SerializeField]
    TextMeshProUGUI m_UnitTierText, m_UnitTypeText;

    UnitSpawnManager m_UnitManager;
    
    void Awake()
    {
        m_UnitManager = FindObjectOfType<UnitSpawnManager>();

    }
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.C) && !m_UnitManager.m_IsCheat)
        {
            Cheat();
        }

        if (m_UnitManager.m_IsCheat)
        {
            if (Input.GetKeyDown(KeyCode.Alpha1))
                m_UnitManager.m_CheatTier = 0;
            if (Input.GetKeyDown(KeyCode.Alpha2))
                m_UnitManager.m_CheatTier = 1;
            if (Input.GetKeyDown(KeyCode.Alpha3))
                m_UnitManager.m_CheatTier = 2;
            if (Input.GetKeyDown(KeyCode.Alpha4))
                m_UnitManager.m_CheatTier = 3;
            if (Input.GetKeyDown(KeyCode.Alpha5))
                m_UnitManager.m_CheatTier = 4;
            if (Input.GetKeyDown(KeyCode.Alpha6))
                m_UnitManager.m_CheatTier = 5;
            if (Input.GetKeyDown(KeyCode.Alpha7))
                m_UnitManager.m_CheatTier = 6;
            if (Input.GetKeyDown(KeyCode.Alpha8))
                m_UnitManager.m_CheatTier = 7;
            if (Input.GetKeyDown(KeyCode.Alpha9))
                m_UnitManager.m_CheatTier = 8;

            if (Input.GetKeyDown(KeyCode.Q))
                m_UnitManager.m_CheatType = ATTACKTYPE.������;
            if (Input.GetKeyDown(KeyCode.W))
                m_UnitManager.m_CheatType = ATTACKTYPE.�ź���;
            if (Input.GetKeyDown(KeyCode.E))
                m_UnitManager.m_CheatType = ATTACKTYPE.������;

            m_UnitTierText.text = $"<color={m_UnitManager.TierTextColorSelect(m_UnitManager.m_CheatTier)}>{TierText(m_UnitManager.m_CheatTier)}</color>";
            m_UnitTypeText.text = $"<color={m_UnitManager.TypeTextColorSelect(m_UnitManager.m_CheatType)}>{m_UnitManager.m_CheatType}</color>";
        }
    }

    void Cheat()
    {
        m_CheatObj.SetActive(true);
        m_UnitManager.m_CheatSetReady = true;
    }
    public void CheatConfirm()
    {
        m_CheatObj.SetActive(false);
        m_CheatSetObj.SetActive(true);
        m_UnitManager.m_IsCheat = true;
        GameManager.Instance.m_Gold += 1000000;
        GameManager.Instance.GoldTextUpdate();
        m_UnitManager.m_CheatSetReady = false;
    }
    public void CheatCancel()
    {
        m_CheatObj.SetActive(false);
        m_UnitManager.m_CheatSetReady = false;
    }
    string TierText(int _tier)
    {
        string str = "";
        switch (_tier)
        {
            case 0:
                str = "�Ϲ�";
                break;
            case 1:
                str = "����";
                break;
            case 2:
                str = "���";
                break;
            case 3:
                str = "����";
                break;
            case 4:
                str = "����";
                break;
            case 5:
                str = "����";
                break;
            case 6:
                str = "��ȭ";
                break;
            case 7:
                str = "����";
                break;
            case 8:
                str = "����";
                break;

        }
        return str;
    }
}
