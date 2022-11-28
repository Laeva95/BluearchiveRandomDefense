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

    public const float minFloat = 0f;
    public const float maxFloat = 100f;

    [SerializeField]
    GameObject[] m_UnitObj;

    public GameObject m_UnitSet, m_MonsterSet;
    [SerializeField]
    TextMeshProUGUI m_UnitNameText, m_UnitTypeText, m_UnitTierText, m_UnitDamageText, m_UnitRangeText, m_UnitKillPointText;
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

    int[] m_Keys = new int[] 
    { 
        ObjectPoolingManager.m_Unit00Key,
    ObjectPoolingManager.m_Unit01Key,
    ObjectPoolingManager.m_Unit02Key,
    ObjectPoolingManager.m_Unit03Key,
    ObjectPoolingManager.m_Unit04Key,
    ObjectPoolingManager.m_Unit05Key,
    ObjectPoolingManager.m_Unit06Key,
    ObjectPoolingManager.m_Unit07Key
    };
    int[] m_Levels = new int[] {0,0,0};
    public List<Unit> m_Type0Unit = new List<Unit>();
    public List<Unit> m_Type1Unit = new List<Unit>();
    public List<Unit> m_Type2Unit = new List<Unit>();

    public Tile m_FocusTile = null;
    public Monster m_FocusMonster = null;
    SellButton m_Sell;
    TextAlarmManager m_TextAlarm;

    private void Awake()
    {
        m_Sell = FindObjectOfType<SellButton>();
        m_TextAlarm = FindObjectOfType<TextAlarmManager>();
    }
    private void Start()
    {
        UpgradeTextUpdate();
    }

    public GameObject SpawnUnit(Tile _tile, int _tier)
    {
        int ranTypePercent = Random.Range(0, 3);

        ATTACKTYPE type = CheckType(ranTypePercent);

        int index = CheckIndex(_tier, type);

        GameObject obj = Spawn(_tier);
        Unit unit = obj.GetComponent<Unit>();
        unit.SetStatus(type, index, _tile);
        unit.SetLevel(m_Levels[(int)type]);
        InsertList(type, unit);

        string tierColor = TierTextColorSelect(unit.GetTier());
        string typeColor = TypeTextColorSelect(unit.GetAttackType());
        m_TextAlarm.AlarmTextUpdate
            ($"<color=orange>교환:</color> <color={tierColor}>{unit.GetTierText()}</color> <color={typeColor}>{unit.GetNameText()}</color>");

        return obj;
    }
    public GameObject SpawnUnit(Tile _tile)
    {
        float ranTierPercent = Random.Range(minFloat, maxFloat);
        int ranTypePercent = Random.Range(0, 3);

        int tier = CheckTier(ranTierPercent);
        ATTACKTYPE type = CheckType(ranTypePercent);

        int index = CheckIndex(tier, type);

        GameObject obj = Spawn(tier);
        Unit unit = obj.GetComponent<Unit>();
        unit.SetStatus(type, index, _tile);
        unit.SetLevel(m_Levels[(int)type]);
        InsertList(type, unit);
        SpawnSoundPlay(tier);

        string tierColor = TierTextColorSelect(unit.GetTier());
        string typeColor = TypeTextColorSelect(unit.GetAttackType());
        string textEffect = $"<color={tierColor}>{UnitSpawnTextEffect(unit.GetTier())}</color>";
        m_TextAlarm.AlarmTextUpdate
            ($"소환: <color={tierColor}>{unit.GetTierText()}</color> <color={typeColor}>{unit.GetNameText()}</color>{textEffect}");

        return obj;
    }
    GameObject Spawn(int _tier)
    {
        return ObjectPoolingManager.Instance.GetQueue(m_Keys[_tier]); ;
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
                for (int i = 0; i < m_Type1Unit.Count; i++)
                {
                    m_Type1Unit[i].SetLevel(m_Levels[(int)_type]);
                }
                break;
            case ATTACKTYPE.관통형:
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
        if (GameManager.Instance.m_Gold >= (50 + m_Levels[0] * 15))
        {
            GameManager.Instance.m_Gold -= (50 + m_Levels[0] * 15);
            Upgrade(ATTACKTYPE.폭발형);
            m_TextAlarm.AlarmTextUpdate($"<color=grey>강화:</color> <color=red>폭발형</color> Level {m_Levels[0]}");
        }
    }
    public void UpgradeBtn1()
    {
        if (GameManager.Instance.m_Gold >= (50 + m_Levels[1] * 15))
        {
            GameManager.Instance.m_Gold -= (50 + m_Levels[1] * 15);
            Upgrade(ATTACKTYPE.신비형);
            m_TextAlarm.AlarmTextUpdate($"<color=grey>강화:</color> <color=blue>신비형</color> Level {m_Levels[1]}");
        }
    }
    public void UpgradeBtn2()
    {
        if (GameManager.Instance.m_Gold >= (50 + m_Levels[2] * 15))
        {
            GameManager.Instance.m_Gold -= (50 + m_Levels[2] * 15);
            Upgrade(ATTACKTYPE.관통형);
            m_TextAlarm.AlarmTextUpdate($"<color=grey>강화:</color> <color=yellow>관통형</color> Level {m_Levels[2]}");
        }
    }
    public void UpgradeTextUpdate()
    {
        for (int i = 0; i < m_PriceTexts.Length; i++)
        {
            m_PriceTexts[i].text = $"{50 + m_Levels[i] * 15}";
        }
        for (int i = 0; i < m_LevelTexts.Length; i++)
        {
            switch (i)
            {
                case 0:
                    m_LevelTexts[i].text = $"Level {m_Levels[i]}";
                    break;
                case 1:
                    m_LevelTexts[i].text = $"Level {m_Levels[i]}";
                    break;
                case 2:
                    m_LevelTexts[i].text = $"Level {m_Levels[i]}";
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
                m_UnitDamageText.text = $"공격력: {m_FocusTile.m_Unit.GetDamageText()}";
                m_UnitRangeText.text = $"사거리: {m_FocusTile.m_Unit.GetRangeText()}";
                m_UnitKillPointText.text = $"킬 수: {m_FocusTile.m_Unit.GetKillPointText()}";

                switch (m_FocusTile.m_Unit.GetAttackType())
                {
                    case ATTACKTYPE.폭발형:
                        m_UnitTypeText.color = Color.red;
                        break;
                    case ATTACKTYPE.신비형:
                        m_UnitTypeText.color = Color.blue;
                        break;
                    case ATTACKTYPE.관통형:
                        m_UnitTypeText.color = Color.yellow;
                        break;
                }
                switch (m_FocusTile.m_Unit.GetTier())
                {
                    case UNITTIER.일반:
                        m_UnitTierText.color = Color.white;
                        break;
                    case UNITTIER.레어:
                        m_UnitTierText.color = Color.green;
                        break;
                    case UNITTIER.고대:
                        m_UnitTierText.color = Color.magenta;
                        break;
                    case UNITTIER.유물:
                        m_UnitTierText.color = Color.red;
                        break;
                    case UNITTIER.서사:
                        m_UnitTierText.color = Color.gray;
                        break;
                    case UNITTIER.전설:
                        m_UnitTierText.color = Color.blue;
                        break;
                    case UNITTIER.신화:
                        m_UnitTierText.color = Color.black;
                        break;
                    case UNITTIER.태초:
                        m_UnitTierText.color = Color.cyan;
                        break;
                }
            }
        }
    }

    public string TypeTextColorSelect(ATTACKTYPE _type)
    {
        string str = "";

        switch (_type)
        {
            case ATTACKTYPE.폭발형:
                str = "red";
                break;
            case ATTACKTYPE.신비형:
                str = "blue";
                break;
            case ATTACKTYPE.관통형:
                str = "yellow";
                break;
        }

        return str;
    }
    public string TierTextColorSelect(UNITTIER _tier)
    {
        string str = "";

        switch (_tier)
        {
            case UNITTIER.일반:
                str = "white";
                break;
            case UNITTIER.레어:
                str = "green";
                break;
            case UNITTIER.고대:
                str = "#ff0090";
                break;
            case UNITTIER.유물:
                str = "red";
                break;
            case UNITTIER.서사:
                str = "grey";
                break;
            case UNITTIER.전설:
                str = "blue";
                break;
            case UNITTIER.신화:
                str = "black";
                break;
            case UNITTIER.태초:
                str = "#00ffff";
                break;
        }

        return str;
    }
    string UnitSpawnTextEffect(UNITTIER _tier)
    {
        string str = "";

        switch (_tier)
        {
            case UNITTIER.일반:
            case UNITTIER.레어:
            case UNITTIER.고대:
                str = "";
                break;
            case UNITTIER.유물:
                str = "●";
                break;
            case UNITTIER.서사:
                str = "●";
                break;
            case UNITTIER.전설:
                str = "★";
                break;
            case UNITTIER.신화:
                str = "★★";
                break;
            case UNITTIER.태초:
                str = "★★★";
                break;
        }

        return str;
    }
    public void MonsterTextUpdate()
    {
        if (m_FocusMonster != null)
        {
            m_MonsterSprite.sprite = m_FocusMonster.GetSprite();
            m_MonsterHPText.text = $"HP: {m_FocusMonster.GetHPText()} / {m_FocusMonster.GetMaxHPText()}";
            m_MonsterArmorText.text = $"방어력: {m_FocusMonster.GetArmorText()}";
            m_MonsterStageText.text = $"스테이지: {m_FocusMonster.GetStageText()}";
            m_MonsterTypeText.text = m_FocusMonster.GetTypeText();
            switch (m_FocusMonster.GetArmorType())
            {
                case ARMORTYPE.경장갑:
                    m_MonsterTypeText.color = Color.red;
                    break;
                case ARMORTYPE.특수장갑:
                    m_MonsterTypeText.color = Color.blue;
                    break;
                case ARMORTYPE.중장갑:
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
    public void RareSellBtn()
    {
        int gold = 0;
        gold += UnitsSell(m_Type0Unit, (int)UNITTIER.레어);
        gold += UnitsSell(m_Type1Unit, (int)UNITTIER.레어);
        gold += UnitsSell(m_Type2Unit, (int)UNITTIER.레어);
        m_TextAlarm.AlarmTextUpdate($"<color=red>판매:</color> <color=green>레어</color> 이하 일괄 <color=red>판매</color><color=#0080ff> +{gold}</color>");
    }
    public void AncientSellBtn()
    {
        int gold = 0;
        gold += UnitsSell(m_Type0Unit, (int)UNITTIER.고대);
        gold += UnitsSell(m_Type1Unit, (int)UNITTIER.고대);
        gold += UnitsSell(m_Type2Unit, (int)UNITTIER.고대);
        m_TextAlarm.AlarmTextUpdate($"<color=red>판매:</color> <color=#ff0090>고대</color> 이하 일괄 <color=red>판매</color><color=#0080ff> +{gold}</color>");
    }
    public void SellType0Btn()
    {
        int gold = 0;
        gold += UnitsSell(m_Type0Unit, (int)UNITTIER.서사);
        m_TextAlarm.AlarmTextUpdate($"<color=red>판매:</color> <color=red>폭발형</color> 일괄 <color=red>판매</color><color=#0080ff> +{gold}</color>");
    }
    public void SellType1Btn()
    {
        int gold = 0;
        gold += UnitsSell(m_Type1Unit, (int)UNITTIER.서사);
        m_TextAlarm.AlarmTextUpdate($"<color=red>판매:</color> <color=blue>신비형</color> 일괄 <color=red>판매</color><color=#0080ff> +{gold}</color>");
    }
    public void SellType2Btn()
    {
        int gold = 0;
        gold += UnitsSell(m_Type2Unit, (int)UNITTIER.서사);
        m_TextAlarm.AlarmTextUpdate($"<color=red>판매:</color> <color=yellow>관통형</color> 일괄 <color=red>판매</color><color=#0080ff> +{gold}</color>");
    }
    int UnitsSell(List<Unit> _list, int _tier)
    {
        int gold = CheckSellList(_list, _tier);

        if (m_FocusMonster != null)
        {
            m_FocusMonster.OnFocusMonster(false);
        }
        if (m_FocusTile != null)
        {
            if (m_FocusTile.m_Unit != null)
            {
                m_FocusTile.m_Unit.OnFocusUnit(false);
            }
        }
        FocusTileSelect(null);
        m_UnitSet.SetActive(false);
        m_MonsterSet.SetActive(false);
        GameManager.Instance.GoldTextUpdate();

        return gold;
    }
    int CheckSellList(List<Unit> _list, int _tier)
    {
        int gold = 0;
        if (_list.Count == 0)
        {
            return 0;
        }
        for (int i = _list.Count - 1; i >= 0; i--)
        {
            if ((int)_list[i].GetTier() <= _tier)
            {
                gold += m_Sell.CheckSellUnitTier(_list[i]);
            }
        }

        return gold;
    }
}
