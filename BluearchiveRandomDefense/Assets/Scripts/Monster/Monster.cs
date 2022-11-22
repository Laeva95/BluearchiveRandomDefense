using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum ARMORTYPE
{
    ���尩 = 0,
    Ư���尩 = 1,
    ���尩 = 2,

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
            case ATTACKTYPE.������:
                switch (m_type)
                {
                    case ARMORTYPE.���尩:
                        _damage = (int)(_damage * 1f);
                        break;
                    case ARMORTYPE.Ư���尩:
                        _damage = (int)(_damage * 0.33f);
                        break;
                    case ARMORTYPE.���尩:
                        _damage = (int)(_damage * 0.66f);
                        break;
                }
                break;
            case ATTACKTYPE.�ź���:
                switch (m_type)
                {
                    case ARMORTYPE.���尩:
                        _damage = (int)(_damage * 0.66f);
                        break;
                    case ARMORTYPE.Ư���尩:
                        _damage = (int)(_damage * 1f);
                        break;
                    case ARMORTYPE.���尩:
                        _damage = (int)(_damage * 0.33f);
                        break;
                }
                break;
            case ATTACKTYPE.������:
                switch (m_type)
                {
                    case ARMORTYPE.���尩:
                        _damage = (int)(_damage * 0.33f);
                        break;
                    case ARMORTYPE.Ư���尩:
                        _damage = (int)(_damage * 0.66f);
                        break;
                    case ARMORTYPE.���尩:
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
