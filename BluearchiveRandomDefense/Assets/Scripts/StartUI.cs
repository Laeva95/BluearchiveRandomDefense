using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class StartUI : MonoBehaviour
{
    [SerializeField]
    GameObject m_DescriptionObj;
    [SerializeField]
    GameObject m_TableObj;
    [SerializeField]
    TextMeshProUGUI m_BestStageText;

    private void Awake()
    {
        StartCoroutine(SetResolutionCoroutine());
    }
    private void Start()
    {
        m_BestStageText.text = $"최고기록: {PlayerPrefs.GetInt("BestStage", 0)} Stage";
    }
    public void StartBtn()
    {
        SceneManager.LoadScene(1);
    }
    public void DescriptionBtn()
    {
        m_DescriptionObj.SetActive(true);
    }
    public void DescriptionCloseBtn()
    {
        m_DescriptionObj.SetActive(false);
    }
    public void TableBtn()
    {
        m_TableObj.SetActive(true);
    }
    public void TableCloseBtn()
    {
        m_TableObj.SetActive(false);
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
    IEnumerator SetResolutionCoroutine()
    {
        yield return new WaitForSeconds(0.5f);
        SetResolution();
    }
}
