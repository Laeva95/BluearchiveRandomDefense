using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    private static GameManager instance;
    public int m_Stage;
    public int m_Gold;
    public static GameManager Instance
    {
        get
        {
            if (instance == null)
            {
                return null;
            }
            return instance;
        }
    }

    void Awake()
    {
        if (instance == null)
        {
            // instance�� ������� ��� �ش� ��ü�� �־���
            instance = this;
        }

        m_Stage = 0;
        m_Gold = 150;
    }

    public void GameOver()
    {

    }
}
