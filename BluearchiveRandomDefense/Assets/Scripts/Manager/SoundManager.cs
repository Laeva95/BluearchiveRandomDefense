using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public enum SOUND_NAME
{
    MonsterDead = 0,
    UnitAttack1 = 1,
    UnitAttack2 = 2,
    UnitSpawn1 = 3,
    UnitSpawn2 = 4,


}
public class SoundManager : MonoBehaviour
{
    // ���� �Ŵ��� ����, ������Ƽ
    // ���� ��ü�� �����ϰ�, �ٸ� Ŭ�������� ���� ����� �� �ֵ��� �̱��� ������ ���
    private static SoundManager instance;
    public static SoundManager Instance
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
    bool m_IsSoundOn = true;
    [SerializeField]
    TextMeshProUGUI m_SoundOnBtnText;
    // ����� Ŭ�� �迭(�ν����� â���� �־���)
    [SerializeField]
    private AudioClip[] m_Clips;
    // ����� �ҽ� �迭
    private AudioSource[] m_Audios;


    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        // SoundManager ������Ʈ�� ������ AudioSource ������Ʈ�� ��� ������
        m_Audios = GetComponents<AudioSource>();
    }

    // ���� ��� �Լ�
    public void SoundPlay(SOUND_NAME _NAME)
    {
        if (_NAME != SOUND_NAME.UnitSpawn1 && _NAME != SOUND_NAME.UnitSpawn2)
        {
            // for���� ���� ����� �ҽ� ������ ����
            for (int i = 0; i < m_Audios.Length - 1; i++)
            {
                // ���� ����� �ҽ��� ��� ���� ��� ���� ����� �ҽ��� Ȯ��
                if (m_Audios[i].isPlaying)
                {
                    continue;
                }
                // ����� �ҽ��� ��� ������ ���� ���
                // �Ű������� ���� ������ ���� ������ҽ��� Ŭ�� ����
                m_Audios[i].clip = m_Clips[(int)_NAME];

                if (m_Audios[i].clip != null)
                {
                    // ����� Ŭ�� ��� �� ����
                    m_Audios[i].Play();
                    return;
                }
            }
        }
        else
        {
            m_Audios[m_Audios.Length - 1].clip = m_Clips[(int)_NAME];

            if (m_Audios[m_Audios.Length - 1].clip != null)
            {
                // ����� Ŭ�� ��� �� ����
                m_Audios[m_Audios.Length - 1].Play();
                return;
            }
        }

    }
    public void SoundOnToggleBtn()
    {
        m_IsSoundOn = !m_IsSoundOn;
        if (m_IsSoundOn)
        {
            m_SoundOnBtnText.text = "On";
            for (int i = 0; i < m_Audios.Length; i++)
            {
                m_Audios[i].volume = 0.1f;
            }
        }
        else
        {
            m_SoundOnBtnText.text = "Off";
            for (int i = 0; i < m_Audios.Length; i++)
            {
                m_Audios[i].volume = 0f;
            }
        }
    }
}
