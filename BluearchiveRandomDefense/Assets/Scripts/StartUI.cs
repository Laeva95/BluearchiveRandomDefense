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
        m_BestStageText.text = $"�ְ���: {PlayerPrefs.GetInt("BestStage", 0)} Stage";
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
        int setWidth = 1440; // ����� ���� �ʺ�
        int setHeight = 900; // ����� ���� ����

        int deviceWidth = Screen.width; // ��� �ʺ� ����
        int deviceHeight = Screen.height; // ��� ���� ����

        Screen.SetResolution(setWidth, (int)(((float)deviceHeight / deviceWidth) * setWidth), Application.isMobilePlatform); // SetResolution �Լ� ����� ����ϱ�

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
    IEnumerator SetResolutionCoroutine()
    {
        yield return new WaitForSeconds(0.5f);
        SetResolution();
    }
}
