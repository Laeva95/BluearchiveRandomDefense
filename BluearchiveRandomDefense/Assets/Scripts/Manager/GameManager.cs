using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class GameManager : MonoBehaviour
{
    private static GameManager instance;
    public int m_Stage;
    public int m_Gold;
    [SerializeField]
    TextMeshProUGUI m_GoldText;
    [SerializeField]
    GameObject m_GameOverObj;
    [SerializeField]
    TextMeshProUGUI m_GameOverText;

    [SerializeField]
    GameObject m_GameClearObj;

    [SerializeField]
    TextMeshProUGUI m_TimeScaleText;

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
        m_Gold = 300;
        GoldTextUpdate();
        SetResolution();
        Time.timeScale = 1;
    }

    public void GameOver()
    {
        StartCoroutine(GameOverCoroutine());
    }
    IEnumerator GameOverCoroutine()
    {
        Time.timeScale = 0;

        m_GameOverObj.SetActive(true);
        m_GameOverText.text = $"����� �ְ������ {m_Stage} Stage�Դϴ�.";

        yield return new WaitForSecondsRealtime(5f);

        SceneManager.LoadScene(0);
    }
    public void GameClear()
    {
        StartCoroutine(GameClearCoroutine());
    }
    IEnumerator GameClearCoroutine()
    {
        Time.timeScale = 0;

        m_GameClearObj.SetActive(true);

        yield return new WaitForSecondsRealtime(5f);

        SceneManager.LoadScene(0);
    }
    public void GoldTextUpdate()
    {
        m_GoldText.text = string.Format("{0:N0}",m_Gold.ToString());
    }

    void SetResolution()
    {
        int setWidth = 1600; // ����� ���� �ʺ�
        int setHeight = 1000; // ����� ���� ����

        int deviceWidth = Screen.width; // ��� �ʺ� ����
        int deviceHeight = Screen.height; // ��� ���� ����

        Screen.SetResolution(setWidth, (int)(((float)deviceHeight / deviceWidth) * setWidth), true); // SetResolution �Լ� ����� ����ϱ�

        if ((float)setWidth / setHeight < (float)deviceWidth / deviceHeight) // ����� �ػ� �� �� ū ���
        {
            float newWidth = ((float)setWidth / setHeight) / ((float)deviceWidth / deviceHeight); // ���ο� �ʺ�
            Camera.main.rect = new Rect((1f - newWidth) / 2f, 0f, newWidth, 1f); // ���ο� Rect ����
        }
        else // ������ �ػ� �� �� ū ���
        {
            float newHeight = ((float)deviceWidth / deviceHeight) / ((float)setWidth / setHeight); // ���ο� ����
            Camera.main.rect = new Rect(0f, (1f - newHeight) / 2f, 1f, newHeight); // ���ο� Rect ����
        }
    }
    public void TimeScaling()
    {
        switch (Time.timeScale)
        {
            case 1:
                Time.timeScale = 2;
                m_TimeScaleText.text = "<<";
                break;
            case 2:
                Time.timeScale = 3;
                m_TimeScaleText.text = "<<<";
                break;
            case 3:
                Time.timeScale = 1;
                m_TimeScaleText.text = "<";
                break;
            default:
                break;
        }
    }
}