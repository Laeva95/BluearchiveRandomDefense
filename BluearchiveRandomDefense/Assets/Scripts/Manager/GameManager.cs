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
    public int m_IsEffect;
    int m_TimeScale = 1;
    bool m_IsSwap = true;
    bool m_IsGameOver = false;
    public bool m_IsOpening = false;
    [SerializeField]
    TextMeshProUGUI m_GoldText;
    [SerializeField]
    GameObject m_GameOverObj;
    [SerializeField]
    TextMeshProUGUI m_GameOverText;

    [SerializeField]
    GameObject m_GameClearObj;
    [SerializeField]
    GameObject m_BtnSetObj;
    [SerializeField]
    GameObject m_PauseObj;
    [SerializeField]
    GameObject m_ColorPaletteObj;
    [SerializeField]
    GameObject m_ColorPickerObj;
    public GameObject m_ResetCheckObj;

    [SerializeField]
    TextMeshProUGUI m_TimeScaleText;
    [SerializeField]
    TextMeshProUGUI m_UnitSwapText;
    [SerializeField]
    TextMeshProUGUI m_BtnSetText;
    [SerializeField]
    TextMeshProUGUI m_EffectSettingText;

    [SerializeField]
    Animator m_BtnSetAni;
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
        m_IsEffect = 0;
        m_Gold = 150;
        GoldTextUpdate();
        StartCoroutine(SetResolutionCoroutine());
        Time.timeScale = 1;
    }
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Pause();
        }
    }
    public void GameOver()
    {
        StartCoroutine(GameOverCoroutine());
    }
    IEnumerator GameOverCoroutine()
    {
        Time.timeScale = 0;
        m_IsGameOver = true;

        m_GameOverObj.SetActive(true);
        m_GameOverText.text = $"당신의 기록은 {m_Stage + m_BonusStage} Stage입니다.";
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
        m_IsGameOver = true;

        m_GameClearObj.SetActive(true);

        yield return new WaitForSecondsRealtime(5f);

        if (!m_PauseObj.activeSelf)
        {
            Time.timeScale = m_TimeScale;
        }
        m_IsGameOver = false;
        m_GameClearObj.SetActive(false);
    }
    void StageDataSave(int _stage)
    {
        SaveData loadData = new SaveData();

        int bestStage = 0;

        if (!File.Exists(Path.Combine(Application.persistentDataPath, "ClearStage.json")))
        {
            bestStage = 0;
        }
        else
        {
            string loadJson = File.ReadAllText(Path.Combine(Application.persistentDataPath, "ClearStage.json"));

            loadData = JsonUtility.FromJson<SaveData>(loadJson);

            bestStage = loadData.stage;
        }

        if (_stage > bestStage)
        {
            SaveData saveData = new SaveData(_stage);

            string saveJson = JsonUtility.ToJson(saveData, true);

            File.WriteAllText(Path.Combine(Application.persistentDataPath, "ClearStage.json"), saveJson);
        }
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
        if (m_IsOpening)
        {
            return;
        }
        switch (Time.timeScale)
        {
            case 1:
                m_TimeScale = 2;
                Time.timeScale = m_TimeScale;
                m_TimeScaleText.text = "x2";
                break;
            case 2:
                m_TimeScale = 4;
                Time.timeScale = m_TimeScale;
                m_TimeScaleText.text = "x4";
                break;
            case 4:
                m_TimeScale = 1;
                Time.timeScale = m_TimeScale;
                m_TimeScaleText.text = "x1";
                break;
            default:
                break;
        }
    }
    public void UnitSwapingBtn()
    {
        if (m_IsOpening)
        {
            return;
        }
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
    public void Pause()
    {
        m_PauseObj.SetActive(!m_PauseObj.activeSelf);
        if (m_PauseObj.activeSelf)
        {
            Time.timeScale = 0;
        }
        else
        {
            if (!m_IsGameOver)
            {
                switch (m_TimeScale)
                {
                    case 1:
                        Time.timeScale = m_TimeScale;
                        break;
                    case 2:
                        Time.timeScale = m_TimeScale;
                        break;
                    case 4:
                        Time.timeScale = m_TimeScale;
                        break;
                        
                }
            }
        }
    }

    IEnumerator SetResolutionCoroutine()
    {
        yield return new WaitForSeconds(0.5f);
        SetResolution();
    }
    public bool CanSwapCheck()
    {
        return (m_IsSwap && Time.timeScale != 0);
    }
    public void BtnSetEnableBtn()
    {
        if (m_IsOpening)
        {
            return;
        }
        if (!m_BtnSetObj.activeSelf)
        {
            m_BtnSetText.text = "Open";
            StartCoroutine(BtnSetOpenCoroutine());
        }
        else
        {
            m_BtnSetText.text = "Close";
            StartCoroutine(BtnSetCloseCoroutine());
        }
    }
    IEnumerator BtnSetOpenCoroutine()
    {
        m_IsOpening = true;
        m_BtnSetObj.SetActive(true);

        yield return new WaitForSeconds(0.5f);
        m_IsOpening = false;
    }
    IEnumerator BtnSetCloseCoroutine()
    {
        m_IsOpening = true;
        m_BtnSetAni.SetTrigger("Close");

        if (m_ColorPaletteObj.activeSelf)
        {
            m_ColorPaletteObj.SetActive(false);
            m_ColorPickerObj.SetActive(false);
        }

        yield return new WaitForSeconds(0.5f);

        m_BtnSetObj.SetActive(false);
        m_IsOpening = false;
    }
    public void ResetCheckBtn()
    {
        if (m_IsOpening)
        {
            return;
        }

        m_ResetCheckObj.SetActive(!m_ResetCheckObj.activeSelf);
    }
    public void ResetBtn()
    {
        SceneManager.LoadScene(1);
    }
    public void EffectSettingBtn()
    {
        if (m_IsOpening)
        {
            return;
        }

        switch (m_IsEffect)
        {
            case 0:
                m_EffectSettingText.text = "Small";
                m_EffectSettingText.fontSize = 22;
                m_IsEffect = 1;
                break;
            case 1:
                m_EffectSettingText.text = "Off";
                m_EffectSettingText.fontSize = 25;
                m_IsEffect = 2;
                break;
            case 2:
                m_EffectSettingText.text = "On";
                m_EffectSettingText.fontSize = 25;
                m_IsEffect = 0;
                break;
            default:
                break;
        }
    }
    public void ColorChangeBtn()
    {
        if (m_IsOpening)
        {
            return;
        }
        m_ColorPaletteObj.SetActive(!m_ColorPaletteObj.activeSelf);
        m_ColorPickerObj.SetActive(!m_ColorPickerObj.activeSelf);
    }
}
