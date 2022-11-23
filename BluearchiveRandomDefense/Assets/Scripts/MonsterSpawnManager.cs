using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MonsterSpawnManager : MonoBehaviour
{
    public static int m_MonsterCount = 0;
    int m_MonsterSpawnCount = 0;
    int m_Timer = 0;
    public Transform[] m_Point;
    WaitForSeconds m_Second = new WaitForSeconds(1f);

    [SerializeField]
    MonsterSO m_MonsterSO;

    private void Start()
    {
        StartCoroutine(MonsterSpawnCoroutine());
    }

    IEnumerator MonsterSpawnCoroutine()
    {
        //yield return new WaitForSeconds(10f);
        while (gameObject.activeSelf)
        {
            MonsterSpawnCountCal(GameManager.Instance.m_Stage);

            StartCoroutine(Spawn());

            for (int i = 0; i < m_Timer; i++)
            {
                if (m_MonsterCount > 100)
                {
                    Debug.Log("몬스터가 100마리 이상입니다!");
                    if (m_MonsterCount > 150)
                    {
                        GameManager.Instance.GameOver();
                    }
                }
                yield return m_Second;
            }
            if (m_MonsterSO.m_IsBoss[GameManager.Instance.m_Stage])
            {
                GameManager.Instance.GameOver();
            }
            GameManager.Instance.m_Stage++;
        }
    }

    void MonsterSpawnCountCal(int _stage)
    {
        switch (_stage)
        {
            case 23:
                m_MonsterSpawnCount = 3;
                m_Timer = 60;
                break;
            case 36:
                m_MonsterSpawnCount = 2;
                m_Timer = 60;
                break;
            case 57:
            case 78:
            case 89:
            case 94:
            case 100:
                m_MonsterSpawnCount = 1;
                m_Timer = 60;
                break;
            default:
                m_MonsterSpawnCount = 30;
                m_Timer = 30;
                break;
        }
    }
    IEnumerator Spawn()
    {
        for (int i = 0; i < m_MonsterSpawnCount; i++)
        {
            GameObject obj = ObjectPoolingManager.Instance.GetQueue(ObjectPoolingManager.m_Monster00Key);

            obj.transform.position = transform.position;

            yield return m_Second;
        }
    }
}
