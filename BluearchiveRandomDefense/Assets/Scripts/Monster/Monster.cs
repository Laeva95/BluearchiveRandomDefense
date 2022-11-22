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

    [SerializeField]
    protected MonsterSO m_MonsterSO;

    private void OnEnable()
    {
        m_HP = m_MonsterSO.m_HP[0];
        m_Armor = m_MonsterSO.m_Armor[0];
        m_Gold = m_MonsterSO.m_Gold[0];
        m_MoveSpeed = m_MonsterSO.m_MoveSpeed[0];
        m_type = m_MonsterSO.m_type[0];
        m_IsBoss = m_MonsterSO.m_IsBoss[0];
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

        if (m_HP <= 0)
        {
            MonsterDead();
        }
    }
    void MonsterDead()
    {

    }
}
