using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TextAlarmManager : MonoBehaviour
{
    [SerializeField]
    TextMeshProUGUI[] m_Alarms;
    void Awake()
    {
        m_Alarms = GetComponentsInChildren<TextMeshProUGUI>();
    }

    public void AlarmTextUpdate(string _newText)
    {
        for (int i = 0; i < m_Alarms.Length - 1; i++)
        {
            m_Alarms[i].text = m_Alarms[i + 1].text;
        }
        m_Alarms[m_Alarms.Length - 1].text = _newText;
    }
}
