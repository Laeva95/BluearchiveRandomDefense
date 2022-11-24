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
    // 사운드 매니저 변수, 프로퍼티
    // 단일 객체만 유지하고, 다른 클래스에서 쉽게 사용할 수 있도록 싱글톤 패턴을 사용
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

    // 오디오 클립 배열(인스펙터 창에서 넣어줌)
    [SerializeField]
    private AudioClip[] m_Clips;
    // 오디오 소스 배열
    private AudioSource[] m_Audio;


    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        // SoundManager 오브젝트가 보유한 AudioSource 컴포넌트를 모두 가져옴
        m_Audio = GetComponents<AudioSource>();
    }

    // 사운드 재생 함수
    public void SoundPlay(SOUND_NAME _NAME)
    {
        // for문을 통해 오디오 소스 각각에 접근
        for (int i = 0; i < m_Audio.Length; i++)
        {
            // 현재 오디오 소스가 재생 중일 경우 다음 오디오 소스를 확인
            if (m_Audio[i].isPlaying)
            {
                continue;
            }
            // 오디오 소스가 재생 중이지 않을 경우
            // 매개변수로 들어온 정보에 따라 오디오소스의 클립 변경
            m_Audio[i].clip = m_Clips[(int)_NAME];

            if (m_Audio[i].clip != null)
            {
                // 변경된 클립 재생 후 리턴
                m_Audio[i].Play();
                return;
            }
        }
    }
}
