using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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

    // ����� Ŭ�� �迭(�ν����� â���� �־���)
    [SerializeField]
    private AudioClip[] m_Clips;
    // ����� �ҽ� �迭
    private AudioSource[] m_Audio;


    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        // SoundManager ������Ʈ�� ������ AudioSource ������Ʈ�� ��� ������
        m_Audio = GetComponents<AudioSource>();
    }

    // ���� ��� �Լ�
    public void SoundPlay(SOUND_NAME _NAME)
    {
        // for���� ���� ����� �ҽ� ������ ����
        for (int i = 0; i < m_Audio.Length; i++)
        {
            // ���� ����� �ҽ��� ��� ���� ��� ���� ����� �ҽ��� Ȯ��
            if (m_Audio[i].isPlaying)
            {
                continue;
            }
            // ����� �ҽ��� ��� ������ ���� ���
            // �Ű������� ���� ������ ���� ������ҽ��� Ŭ�� ����
            m_Audio[i].clip = m_Clips[(int)_NAME];

            if (m_Audio[i].clip != null)
            {
                // ����� Ŭ�� ��� �� ����
                m_Audio[i].Play();
                return;
            }
        }
    }
}
