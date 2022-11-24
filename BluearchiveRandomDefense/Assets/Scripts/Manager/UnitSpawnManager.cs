using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class UnitSpawnManager : MonoBehaviour
{
    public const float tier0 = 47f;         // 47%
    public const float tier1 = 78f;       // 31%
    public const float tier2 = 90.3f;       // 12.3%
    public const float tier3 = 96.9f;       // 6.6%
    public const float tier4 = 99.1f;       // 2.2%
    public const float tier5 = 99.85f;       // 0.75%
    public const float tier6 = 99.95f;       // 0.1%
    public const float tier7 = 100f;        // 0.05%

    [SerializeField]
    GameObject[] m_UnitObj;

    public GameObject m_UnitSet, m_MonsterSet;
    [SerializeField]
    TextMeshProUGUI m_UnitNameText, m_UnitTypeText, m_UnitTierText, m_UnitDamageText, m_UnitRangeText;
    [SerializeField]
    Image m_UnitSprite;
    [SerializeField]
    TextMeshProUGUI m_MonsterHPText, m_MonsterTypeText, m_MonsterStageText, m_MonsterArmorText;
    [SerializeField]
    Image m_MonsterSprite;

    [SerializeField]
    TextMeshProUGUI[] m_PriceTexts;
    [SerializeField]
    TextMeshProUGUI[] m_LevelTexts;

    public int[] m_Levels = new int[] {0,0,0};
    public List<Unit> m_Type0Unit = new List<Unit>();
    public List<Unit> m_Type1Unit = new List<Unit>();
    public List<Unit> m_Type2Unit = new List<Unit>();

    public Tile m_FocusTile = null;
    public Monster m_FocusMonster = null;

    private void Start()
    {
        UpgradeTextUpdate();
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
        SpawnSoundPlay(tier);

        return obj;
    }
    // ����׿�
    //public GameObject SpawnUnit(int _tier)
    //{
    //    int ranTypePercent = Random.Range(0, 3);

    //    ATTACKTYPE type = CheckType(ranTypePercent);

    //    int index = CheckIndex(_tier, type);

    //    GameObject obj = Spawn(_tier);
    //    Unit unit = obj.GetComponent<Unit>();
    //    unit.SetStatus(type, index);
    //    unit.SetLevel(m_Levels[(int)type]);
    //    InsertList(type, unit);

    //    return obj;
    //}
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
                        index = 7;
                        break;
                    case ATTACKTYPE.�ź���:
                        index = 15;
                        break;
                    case ATTACKTYPE.������:
                        index = 23;
                        break;
                }
                break;
            case 1:
                switch (_type)
                {
                    case ATTACKTYPE.������:
                        index = 6;
                        break;
                    case ATTACKTYPE.�ź���:
                        index = 14;
                        break;
                    case ATTACKTYPE.������:
                        index = 22;
                        break;
                }
                break;
            case 2:
                switch (_type)
                {
                    case ATTACKTYPE.������:
                        index = 5;
                        break;
                    case ATTACKTYPE.�ź���:
                        index = 13;
                        break;
                    case ATTACKTYPE.������:
                        index = 21;
                        break;
                }
                break;
            case 3:
                switch (_type)
                {
                    case ATTACKTYPE.������:
                        index = 4;
                        break;
                    case ATTACKTYPE.�ź���:
                        index = 12;
                        break;
                    case ATTACKTYPE.������:
                        index = 20;
                        break;
                }
                break;
            case 4:
                switch (_type)
                {
                    case ATTACKTYPE.������:
                        index = 3;
                        break;
                    case ATTACKTYPE.�ź���:
                        index = 11;
                        break;
                    case ATTACKTYPE.������:
                        index = 19;
                        break;
                }
                break;
            case 5:
                switch (_type)
                {
                    case ATTACKTYPE.������:
                        index = 2;
                        break;
                    case ATTACKTYPE.�ź���:
                        index = 10;
                        break;
                    case ATTACKTYPE.������:
                        index = 18;
                        break;
                }
                break;
            case 6:
                switch (_type)
                {
                    case ATTACKTYPE.������:
                        index = 1;
                        break;
                    case ATTACKTYPE.�ź���:
                        index = 9;
                        break;
                    case ATTACKTYPE.������:
                        index = 17;
                        break;
                }
                break;
            case 7:
                switch (_type)
                {
                    case ATTACKTYPE.������:
                        index = 0;
                        break;
                    case ATTACKTYPE.�ź���:
                        index = 8;
                        break;
                    case ATTACKTYPE.������:
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
    void Upgrade(ATTACKTYPE _type)
    {
        m_Levels[(int)_type]++;
        switch (_type)
        {
            case ATTACKTYPE.������:
                for (int i = 0; i < m_Type0Unit.Count; i++)
                {
                    m_Type0Unit[i].SetLevel(m_Levels[(int)_type]);
                }
                break;
            case ATTACKTYPE.�ź���:
                for (int i = 0; i < m_Type1Unit.Count; i++)
                {
                    m_Type1Unit[i].SetLevel(m_Levels[(int)_type]);
                }
                break;
            case ATTACKTYPE.������:
                for (int i = 0; i < m_Type2Unit.Count; i++)
                {
                    m_Type2Unit[i].SetLevel(m_Levels[(int)_type]);
                }
                break;
        }
        UpgradeTextUpdate();
        UnitTextUpdate();
        GameManager.Instance.GoldTextUpdate();
    }
    public void UpgradeBtn0()
    {
        if (GameManager.Instance.m_Gold >= (50 + m_Levels[0] * 25))
        {
            GameManager.Instance.m_Gold -= (50 + m_Levels[0] * 25);
            Upgrade(ATTACKTYPE.������);
        }
    }
    public void UpgradeBtn1()
    {
        if (GameManager.Instance.m_Gold >= (50 + m_Levels[1] * 25))
        {
            GameManager.Instance.m_Gold -= (50 + m_Levels[1] * 25);
            Upgrade(ATTACKTYPE.�ź���);
        }
    }
    public void UpgradeBtn2()
    {
        if (GameManager.Instance.m_Gold >= (50 + m_Levels[2] * 25))
        {
            GameManager.Instance.m_Gold -= (50 + m_Levels[2] * 25);
            Upgrade(ATTACKTYPE.������);
        }
    }
    public void UpgradeTextUpdate()
    {
        for (int i = 0; i < m_PriceTexts.Length; i++)
        {
            m_PriceTexts[i].text = $"{50 + m_Levels[i] * 25}";
        }
        for (int i = 0; i < m_LevelTexts.Length; i++)
        {
            switch (i)
            {
                case 0:
                    m_LevelTexts[i].text = $"������\n��ȭ\nLevel {m_Levels[i]}";
                    break;
                case 1:
                    m_LevelTexts[i].text = $"�ź���\n��ȭ\nLevel {m_Levels[i]}";
                    break;
                case 2:
                    m_LevelTexts[i].text = $"������\n��ȭ\nLevel {m_Levels[i]}";
                    break;
            }
        }
    }
    public void FocusTileSelect(Tile _tile)
    {
        m_FocusTile = _tile;
        m_FocusMonster = null;
    }
    public void FocusMonsterSelect(Monster _monster)
    {
        m_FocusMonster = _monster;
        m_FocusTile = null;
    }
    public void UnitTextUpdate()
    {
        if (m_FocusTile != null)
        {
            if (m_FocusTile.m_Unit != null)
            {
                m_UnitSprite.sprite = m_FocusTile.m_Unit.GetSprite();
                m_UnitNameText.text = m_FocusTile.m_Unit.GetNameText();
                m_UnitTypeText.text = m_FocusTile.m_Unit.GetTypeText();
                m_UnitTierText.text = m_FocusTile.m_Unit.GetTierText();
                m_UnitDamageText.text = $"���ݷ�: {m_FocusTile.m_Unit.GetDamageText()}";
                m_UnitRangeText.text = $"��Ÿ�: {m_FocusTile.m_Unit.GetRangeText()}";
                switch (m_FocusTile.m_Unit.GetAttackType())
                {
                    case ATTACKTYPE.������:
                        m_UnitTypeText.color = Color.red;
                        break;
                    case ATTACKTYPE.�ź���:
                        m_UnitTypeText.color = Color.blue;
                        break;
                    case ATTACKTYPE.������:
                        m_UnitTypeText.color = Color.yellow;
                        break;
                }
                switch (m_FocusTile.m_Unit.GetTier())
                {
                    case UNITTIER.�Ϲ�:
                        m_UnitTierText.color = Color.white;
                        break;
                    case UNITTIER.����:
                        m_UnitTierText.color = Color.green;
                        break;
                    case UNITTIER.���:
                        m_UnitTierText.color = Color.magenta;
                        break;
                    case UNITTIER.����:
                        m_UnitTierText.color = Color.red;
                        break;
                    case UNITTIER.����:
                        m_UnitTierText.color = Color.gray;
                        break;
                    case UNITTIER.����:
                        m_UnitTierText.color = Color.blue;
                        break;
                    case UNITTIER.��ȭ:
                        m_UnitTierText.color = Color.black;
                        break;
                    case UNITTIER.����:
                        m_UnitTierText.color = Color.cyan;
                        break;
                }
            }
        }
    }
    public void MonsterTextUpdate()
    {
        if (m_FocusMonster != null)
        {
            m_MonsterSprite.sprite = m_FocusMonster.GetSprite();
            m_MonsterHPText.text = $"HP: {m_FocusMonster.GetHPText()}";
            m_MonsterArmorText.text = $"����: {m_FocusMonster.GetArmorText()}";
            m_MonsterStageText.text = $"��������: {m_FocusMonster.GetStageText()}";
            m_MonsterTypeText.text = m_FocusMonster.GetTypeText();
            switch (m_FocusMonster.GetArmorType())
            {
                case ARMORTYPE.���尩:
                    m_MonsterTypeText.color = Color.red;
                    break;
                case ARMORTYPE.Ư���尩:
                    m_MonsterTypeText.color = Color.blue;
                    break;
                case ARMORTYPE.���尩:
                    m_MonsterTypeText.color = Color.yellow;
                    break;
            }
        }
    }

    void SpawnSoundPlay(int _tier)
    {
        if (_tier < 5)
        {
            SoundManager.Instance.SoundPlay(SOUND_NAME.UnitSpawn1);
        }
        else
        {
            SoundManager.Instance.SoundPlay(SOUND_NAME.UnitSpawn2);
        }
    }
}
