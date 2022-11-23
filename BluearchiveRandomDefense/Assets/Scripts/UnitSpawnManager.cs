using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnitSpawnManager : MonoBehaviour
{
    public const float tier0 = 47f;         // 47%
    public const float tier1 = 77.9f;       // 30.9%
    public const float tier2 = 90.1f;       // 12.2%
    public const float tier3 = 96.6f;       // 6.5%
    public const float tier4 = 98.8f;       // 2.2%
    public const float tier5 = 99.6f;       // 0.8%
    public const float tier6 = 99.9f;       // 0.3%
    public const float tier7 = 100f;        // 0.1%

    [SerializeField]
    GameObject[] m_UnitObj;

    public int[] m_Levels = new int[] {0,0,0};
    public List<Unit> m_Type0Unit = new List<Unit>();
    public List<Unit> m_Type1Unit = new List<Unit>();
    public List<Unit> m_Type2Unit = new List<Unit>();

    Tile m_FocusTile = null;
    Monster m_FocusMonster = null;

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Alpha5))
        {
            SpawnUnit(5);
        }
        if (Input.GetKeyDown(KeyCode.Alpha6))
        {
            SpawnUnit(6);
        }
        if (Input.GetKeyDown(KeyCode.Alpha7))
        {
            SpawnUnit(7);
        }
    }
    public GameObject SpawnUnit()
    {
        float ranTierPercent = Random.Range(0f, 100f);
        int ranTypePercent = Random.Range(0, 3);

        int tier = CheckTier(ranTierPercent);
        ATTACKTYPE type = CheckType(ranTypePercent);

        int index = CheckIndex(tier, type);

        GameObject obj = Spawn(tier);
        Unit unit = obj.GetComponent<Unit>();
        unit.SetStatus(type, index);
        unit.SetLevel(m_Levels[(int)type]);
        InsertList(type, unit);

        return obj;
    }
    // 디버그용
    public GameObject SpawnUnit(int _tier)
    {
        int ranTypePercent = Random.Range(0, 3);

        ATTACKTYPE type = CheckType(ranTypePercent);

        int index = CheckIndex(_tier, type);

        GameObject obj = Spawn(_tier);
        Unit unit = obj.GetComponent<Unit>();
        unit.SetStatus(type, index);
        unit.SetLevel(m_Levels[(int)type]);
        InsertList(type, unit);

        return obj;
    }
    GameObject Spawn(int _tier)
    {
        return Instantiate(m_UnitObj[_tier], gameObject.transform.position, Quaternion.identity);
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
                type = ATTACKTYPE.폭발형;
                break;
            case 1:
                type = ATTACKTYPE.신비형;
                break;
            case 2:
                type = ATTACKTYPE.관통형;
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
                    case ATTACKTYPE.폭발형:
                        index = 7;
                        break;
                    case ATTACKTYPE.신비형:
                        index = 15;
                        break;
                    case ATTACKTYPE.관통형:
                        index = 23;
                        break;
                }
                break;
            case 1:
                switch (_type)
                {
                    case ATTACKTYPE.폭발형:
                        index = 6;
                        break;
                    case ATTACKTYPE.신비형:
                        index = 14;
                        break;
                    case ATTACKTYPE.관통형:
                        index = 22;
                        break;
                }
                break;
            case 2:
                switch (_type)
                {
                    case ATTACKTYPE.폭발형:
                        index = 5;
                        break;
                    case ATTACKTYPE.신비형:
                        index = 13;
                        break;
                    case ATTACKTYPE.관통형:
                        index = 21;
                        break;
                }
                break;
            case 3:
                switch (_type)
                {
                    case ATTACKTYPE.폭발형:
                        index = 4;
                        break;
                    case ATTACKTYPE.신비형:
                        index = 12;
                        break;
                    case ATTACKTYPE.관통형:
                        index = 20;
                        break;
                }
                break;
            case 4:
                switch (_type)
                {
                    case ATTACKTYPE.폭발형:
                        index = 3;
                        break;
                    case ATTACKTYPE.신비형:
                        index = 11;
                        break;
                    case ATTACKTYPE.관통형:
                        index = 19;
                        break;
                }
                break;
            case 5:
                switch (_type)
                {
                    case ATTACKTYPE.폭발형:
                        index = 2;
                        break;
                    case ATTACKTYPE.신비형:
                        index = 10;
                        break;
                    case ATTACKTYPE.관통형:
                        index = 18;
                        break;
                }
                break;
            case 6:
                switch (_type)
                {
                    case ATTACKTYPE.폭발형:
                        index = 1;
                        break;
                    case ATTACKTYPE.신비형:
                        index = 9;
                        break;
                    case ATTACKTYPE.관통형:
                        index = 17;
                        break;
                }
                break;
            case 7:
                switch (_type)
                {
                    case ATTACKTYPE.폭발형:
                        index = 0;
                        break;
                    case ATTACKTYPE.신비형:
                        index = 8;
                        break;
                    case ATTACKTYPE.관통형:
                        index = 16;
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
            case ATTACKTYPE.폭발형:
                m_Type0Unit.Add(unit);
                break;
            case ATTACKTYPE.신비형:
                m_Type1Unit.Add(unit);
                break;
            case ATTACKTYPE.관통형:
                m_Type2Unit.Add(unit);
                break;
        }
    }

    void Upgrade(ATTACKTYPE _type)
    {
        m_Levels[(int)_type]++;
        switch (_type)
        {
            case ATTACKTYPE.폭발형:
                for (int i = 0; i < m_Type0Unit.Count; i++)
                {
                    m_Type0Unit[i].SetLevel(m_Levels[(int)_type]);
                }
                break;
            case ATTACKTYPE.신비형:
                for (int i = 0; i < m_Type0Unit.Count; i++)
                {
                    m_Type1Unit[i].SetLevel(m_Levels[(int)_type]);
                }
                break;
            case ATTACKTYPE.관통형:
                for (int i = 0; i < m_Type0Unit.Count; i++)
                {
                    m_Type2Unit[i].SetLevel(m_Levels[(int)_type]);
                }
                break;
        }
    }
    public void UpgradeBtn0()
    {
        Upgrade(ATTACKTYPE.폭발형);
    }
    public void UpgradeBtn1()
    {
        Upgrade(ATTACKTYPE.신비형);
    }
    public void UpgradeBtn2()
    {
        Upgrade(ATTACKTYPE.관통형);
    }
    public void FocusTileSelect(Tile _tile)
    {
        m_FocusTile = _tile;
    }
    public void FocusMonsterSelect(Monster _monster)
    {
        m_FocusMonster = _monster;
    }
}
