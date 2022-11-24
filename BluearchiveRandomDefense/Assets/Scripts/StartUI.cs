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
}
