using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

[System.Serializable]
public class SaveData
{
    public int stage;

    public SaveData()
    {

    }
    public SaveData(int _stage)
    {
        stage = _stage;
    }
}
public class GameManager : MonoBehaviour
{
    private static GameManager instance;
    public int m_Stage;
    public int m_BonusStage;
    public int m_Gold;
    bool m_IsSwap = true;
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
    [SerializeField]
    TextMeshProUGUI m_UnitSwapText;

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
            // instance가 비어있을 경우 해당 객체를 넣어줌
            instance = this;
        }

        m_Stage = 0;
        m_BonusStage = 0;
        m_Gold = 150;
        GoldTextUpdate();
        StartCoroutine(SetResolutionCoroutine());
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
        m_GameOverText.text = $"당신의 최고기록은 {m_Stage + m_BonusStage} Stage입니다.";
        StageDataSave(m_Stage + m_BonusStage);

        yield return new WaitForSecondsRealtime(5f);

        SceneManager.LoadScene(0);
    }
    public void GameClear()
    {
        StartCoroutine(GameClearCoroutine());
    }
    IEnumerator GameClearCoroutine()
    {
        StageDataSave(101);

        Time.timeScale = 0;

        m_GameClearObj.SetActive(true);

        yield return new WaitForSecondsRealtime(5f);

        Time.timeScale = 1;
        m_GameClearObj.SetActive(false);
    }
    void StageDataSave(int _stage)
    {
        SaveData saveData = new SaveData(_stage);

        string json = JsonUtility.ToJson(saveData, true);

        File.WriteAllText(Path.Combine(Application.persistentDataPath, "ClearStage.json"), json);
    }
    public void GoldTextUpdate()
    {
        m_GoldText.text = string.Format("{0:N0}",m_Gold.ToString());
    }

    void SetResolution()
    {
        int setWidth = 1440; // 사용자 설정 너비
        int setHeight = 900; // 사용자 설정 높이

        int deviceWidth = Screen.width; // 기기 너비 저장
        int deviceHeight = Screen.height; // 기기 높이 저장

        Screen.SetResolution(setWidth, (int)(((float)deviceHeight / deviceWidth) * setWidth), Application.isMobilePlatform); // SetResolution 함수 제대로 사용하기

        if ((float)setWidth / setHeight < (float)deviceWidth / deviceHeight) // 기기의 해상도 비가 더 큰 경우
        {
            float newWidth = ((float)setWidth / setHeight) / ((float)deviceWidth / deviceHeight); // 새로운 너비
            Camera.main.rect = new Rect((1f - newWidth) / 2f, 0f, newWidth, 1f); // 새로운 Rect 적용
        }
        else // 게임의 해상도 비가 더 큰 경우
        {
            float newHeight = ((float)deviceWidth / deviceHeight) / ((float)setWidth / setHeight); // 새로운 높이
            Camera.main.rect = new Rect(0f, (1f - newHeight) / 2f, 1f, newHeight); // 새로운 Rect 적용
        }
    }
    public void TimeScalingBtn()
    {
        switch (Time.timeScale)
        {
            case 1:
                Time.timeScale = 2;
                m_TimeScaleText.text = "x2";
                break;
            case 2:
                Time.timeScale = 4;
                m_TimeScaleText.text = "x4";
                break;
            case 4:
                Time.timeScale = 1;
                m_TimeScaleText.text = "x1";
                break;
            default:
                break;
        }
    }
    public void UnitSwapingBtn()
    {
        m_IsSwap = !m_IsSwap;
        if (m_IsSwap)
        {
            m_UnitSwapText.text = "On";
        }
        else
        {
            m_UnitSwapText.text = "Off";
        }
    }

    IEnumerator SetResolutionCoroutine()
    {
        yield return new WaitForSeconds(0.5f);
        SetResolution();
    }
    public bool CanSwapCheck()
    {
        return m_IsSwap;
    }
}
