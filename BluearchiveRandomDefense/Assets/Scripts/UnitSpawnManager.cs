using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitSpawnManager : MonoBehaviour
{
    public const float tier0 = 50f;         // 50%
    public const float tier1 = 83f;         // 33%
    public const float tier2 = 93.1f;       // 10.1%
    public const float tier3 = 98.3f;       // 5.2%
    public const float tier4 = 99.3f;       // 1%
    public const float tier5 = 99.9f;       // 0.6%
    public const float tier6 = 99.98f;      // 0.08%
    public const float tier7 = 100f;        // 0.02%

    [SerializeField]
    GameObject[] m_UnitObj;

    public List<Unit> m_Type0Unit = new List<Unit>();
    public List<Unit> m_Type1Unit = new List<Unit>();
    public List<Unit> m_Type2Unit = new List<Unit>();

    public void SpawnUnit()
    {
        float ran1 = Random.Range(0f, 100f);
        int ran2 = Random.Range(0, 3);

        int tier = CheckTier(ran1);
        ATTACKTYPE type = CheckType(ran2);

        int index = CheckIndex(tier, type);

        GameObject obj = Spawn(tier);
        Unit unit = obj.GetComponent<Unit>();
        unit.SetStatus(type, index);
        InsertList(type, unit);
    }
    GameObject Spawn(int _tier)
    {
        return Instantiate(m_UnitObj[_tier]);
    }
    int CheckTier(float _ran)
    {
        int tier = 0;
        if (_ran <= tier0)
        {
            tier = 0;
        }
        else if (_ran <= tier1)
        {
            tier = 1;
        }
        else if (_ran <= tier2)
        {
            tier = 2;
        }
        else if (_ran <= tier3)
        {
            tier = 3;
        }
        else if (_ran <= tier4)
        {
            tier = 4;
        }
        else if (_ran <= tier5)
        {
            tier = 5;
        }
        else if (_ran <= tier6)
        {
            tier = 6;
        }
        else if (_ran <= tier7)
        {
            tier = 7;
        }
        return tier;
    }
    ATTACKTYPE CheckType(int _ran)
    {
        ATTACKTYPE type = 0;
        switch (_ran)
        {
            case 0:
                type = ATTACKTYPE.������;
                break;
            case 1:
                type = ATTACKTYPE.�ź���;
                break;
            case 2:
                type = ATTACKTYPE.������;
                break;
        }
        return type;
    }
    int CheckIndex(int _tier, ATTACKTYPE _type)
    {
        int index = 0;
        switch (_tier)
        {
            case 0:
                switch (_type)
                {
                    case ATTACKTYPE.������:
                        index = 0;
                        break;
                    case ATTACKTYPE.�ź���:
                        index = 1;
                        break;
                    case ATTACKTYPE.������:
                        index = 2;
                        break;
                }
                break;
            case 1:
                switch (_type)
                {
                    case ATTACKTYPE.������:
                        index = 3;
                        break;
                    case ATTACKTYPE.�ź���:
                        index = 4;
                        break;
                    case ATTACKTYPE.������:
                        index = 5;
                        break;
                }
                break;
            case 2:
                switch (_type)
                {
                    case ATTACKTYPE.������:
                        index = 6;
                        break;
                    case ATTACKTYPE.�ź���:
                        index = 7;
                        break;
                    case ATTACKTYPE.������:
                        index = 8;
                        break;
                }
                break;
            case 3:
                switch (_type)
                {
                    case ATTACKTYPE.������:
                        index = 9;
                        break;
                    case ATTACKTYPE.�ź���:
                        index = 10;
                        break;
                    case ATTACKTYPE.������:
                        index = 11;
                        break;
                }
                break;
            case 4:
                switch (_type)
                {
                    case ATTACKTYPE.������:
                        index = 12;
                        break;
                    case ATTACKTYPE.�ź���:
                        index = 13;
                        break;
                    case ATTACKTYPE.������:
                        index = 14;
                        break;
                }
                break;
            case 5:
                switch (_type)
                {
                    case ATTACKTYPE.������:
                        index = 15;
                        break;
                    case ATTACKTYPE.�ź���:
                        index = 16;
                        break;
                    case ATTACKTYPE.������:
                        index = 17;
                        break;
                }
                break;
            case 6:
                switch (_type)
                {
                    case ATTACKTYPE.������:
                        index = 18;
                        break;
                    case ATTACKTYPE.�ź���:
                        index = 19;
                        break;
                    case ATTACKTYPE.������:
                        index = 20;
                        break;
                }
                break;
            case 7:
                switch (_type)
                {
                    case ATTACKTYPE.������:
                        index = 21;
                        break;
                    case ATTACKTYPE.�ź���:
                        index = 22;
                        break;
                    case ATTACKTYPE.������:
                        index = 23;
                        break;
                }
                break;
        }
        return index;
    }
    void InsertList(ATTACKTYPE _type, Unit unit)
    {
        switch (_type)
        {
            case ATTACKTYPE.������:
                m_Type0Unit.Add(unit);
                break;
            case ATTACKTYPE.�ź���:
                m_Type1Unit.Add(unit);
                break;
            case ATTACKTYPE.������:
                m_Type2Unit.Add(unit);
                break;
        }
    }
}
