using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum ARMORTYPE
{
    ∞Ê¿Â∞© = 0,
    ∆Øºˆ¿Â∞© = 1,
    ¡ﬂ¿Â∞© = 2,

}

public class Monster : MonoBehaviour
{
    int m_HP;
    int m_Armor;
    int m_Gold;
    float m_MoveSpeed;
    ARMORTYPE m_type;
    bool m_IsBoss;
    WaitForSeconds m_OnDamageEffectSec = new WaitForSeconds(0.1f);
    SpriteRenderer m_Spren;
    int m_NextPoint;
    Transform[] m_Point;

    public MonsterSO m_MonsterSO;

    private void Awake()
    {
        m_Spren = GetComponent<SpriteRenderer>();
        m_Point = FindObjectOfType<MonsterSpawnManager>().m_Point;
    }

    private void OnEnable()
    {
        m_HP = m_MonsterSO.m_HP[GameManager.Instance.m_Stage];
        m_Armor = m_MonsterSO.m_Armor[GameManager.Instance.m_Stage];
        m_Gold = m_MonsterSO.m_Gold[GameManager.Instance.m_Stage];
        m_MoveSpeed = m_MonsterSO.m_MoveSpeed[GameManager.Instance.m_Stage];
        m_type = m_MonsterSO.m_type[GameManager.Instance.m_Stage];
        m_IsBoss = m_MonsterSO.m_IsBoss[GameManager.Instance.m_Stage];
        m_Spren.color = Color.white;

        m_NextPoint = 0;
        MonsterSpawnManager.m_MonsterCount++;

        StartCoroutine(MonsterMoveCoroutine());
    }
    private void OnDisable()
    {
        MonsterSpawnManager.m_MonsterCount--;
        StopAllCoroutines();
    }
    IEnumerator MonsterMoveCoroutine()
    {
        while (gameObject.activeSelf)
        {
            Vector3 dir = (m_Point[m_NextPoint].position - transform.position).normalized;
            transform.position += dir * m_MoveSpeed * Time.deltaTime;

            if (transform.position == m_Point[m_NextPoint].position)
            {
                m_NextPoint++;
                if (m_NextPoint == 4)
                {
                    m_NextPoint = 0;
                }
            }
            yield return new WaitForSeconds(Time.deltaTime);
        }
    }
    public void OnDamage(ATTACKTYPE _type, int _damage)
    {
        _damage -= m_Armor;

        switch (_type)
        {
            case ATTACKTYPE.∆¯πﬂ«¸:
                switch (m_type)
                {
                    case ARMORTYPE.∞Ê¿Â∞©:
                        _damage = (int)(_damage * 1f);
                        break;
                    case ARMORTYPE.∆Øºˆ¿Â∞©:
                        _damage = (int)(_damage * 0.33f);
                        break;
                    case ARMORTYPE.¡ﬂ¿Â∞©:
                        _damage = (int)(_damage * 0.66f);
                        break;
                }
                break;
            case ATTACKTYPE.Ω≈∫Ò«¸:
                switch (m_type)
                {
                    case ARMORTYPE.∞Ê¿Â∞©:
                        _damage = (int)(_damage * 0.66f);
                        break;
                    case ARMORTYPE.∆Øºˆ¿Â∞©:
                        _damage = (int)(_damage * 1f);
                        break;
                    case ARMORTYPE.¡ﬂ¿Â∞©:
                        _damage = (int)(_damage * 0.33f);
                        break;
                }
                break;
            case ATTACKTYPE.∞¸≈Î«¸:
                switch (m_type)
                {
                    case ARMORTYPE.∞Ê¿Â∞©:
                        _damage = (int)(_damage * 0.33f);
                        break;
                    case ARMORTYPE.∆Øºˆ¿Â∞©:
                        _damage = (int)(_damage * 0.66f);
                        break;
                    case ARMORTYPE.¡ﬂ¿Â∞©:
                        _damage = (int)(_damage * 1f);
                        break;  
                }
                break;
        }

        m_HP -= _damage;
        StartCoroutine(OnDamageEffect());


        if (m_HP <= 0)
        {
            MonsterDead();
        }
    }
    void MonsterDead()
    {

    }
    IEnumerator OnDamageEffect()
    {
        m_Spren.color = Color.red;

        yield return m_OnDamageEffectSec;

        m_Spren.color = Color.white;
    }
}
