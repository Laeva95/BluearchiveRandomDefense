using System.Collections;
using System.Collections.Generic;
using System.IO;
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
    GameObject m_CollectionObj;
    [SerializeField]
    GameObject[] m_CollectionPages;
    [SerializeField]
    GameObject m_PatchNoteObj;
    [SerializeField]
    TextMeshProUGUI m_BestStageText;

    private void Awake()
    {
        StartCoroutine(SetResolutionCoroutine());
    }
    private void Start()
    {
        m_BestStageText.text = $"�ְ���: {StageDataLoad()} Stage";
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
    public void CollectionBtn()
    {
        m_CollectionObj.SetActive(true);
    }
    public void CollectionCloseBtn()
    {
        m_CollectionObj.SetActive(false);
    }
    public void CollectionPageRightBtn()
    {
        for (int i = 0; i < m_CollectionPages.Length; i++)
        {
            if (m_CollectionPages[i].activeSelf)
            {
                if (i + 1 == m_CollectionPages.Length)
                {
                    m_CollectionPages[i].SetActive(false);
                    m_CollectionPages[0].SetActive(true);
                    return;
                }
                else
                {
                    m_CollectionPages[i].SetActive(false);
                    m_CollectionPages[i + 1].SetActive(true);
                    return;
                }
            }
        }
    }
    public void CollectionPageLeftBtn()
    {
        for (int i = 0; i < m_CollectionPages.Length; i++)
        {
            if (m_CollectionPages[i].activeSelf)
            {
                if (i - 1 == -1)
                {
                    m_CollectionPages[i].SetActive(false);
                    m_CollectionPages[m_CollectionPages.Length - 1].SetActive(true);
                    return;
                }
                else
                {
                    m_CollectionPages[i].SetActive(false);
                    m_CollectionPages[i - 1].SetActive(true);
                    return;
                }
            }
        }
    }
    public void PatchNoteBtn()
    {
        m_PatchNoteObj.SetActive(!m_PatchNoteObj.activeSelf);
    }

    int StageDataLoad()
    {
        SaveData loadData = new SaveData();

        int stage = 0;

        if (!File.Exists(Path.Combine(Application.persistentDataPath, "ClearStage.json")))
        {
            stage = 0;
        }
        else
        {
            string json = File.ReadAllText(Path.Combine(Application.persistentDataPath, "ClearStage.json"));

            loadData = JsonUtility.FromJson<SaveData>(json);

            stage = loadData.stage;
        }

        return stage;
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
