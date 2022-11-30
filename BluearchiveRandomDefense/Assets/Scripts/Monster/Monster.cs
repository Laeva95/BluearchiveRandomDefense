using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum ARMORTYPE
{
    ∞Ê¿Â∞© = 0,
    ∆Øºˆ¿Â∞© = 1,
    ¡ﬂ¿Â∞© = 2,
    π´¿€¿ß = 3,

}

public class Monster : MonoBehaviour
{
    [SerializeField]
    int m_Stage;
    int m_HP;
    int m_MaxHP;
    int m_Armor;
    int m_Gold;
    float m_MoveSpeed;
    ARMORTYPE m_type;
    Color m_Color;
    WaitForSeconds m_OnDamageEffectSec = new WaitForSeconds(0.1f);
    SpriteRenderer m_Spren;
    public Transform[] m_Point;
    UnitSpawnManager m_UnitManager;
    [SerializeField]
    GameObject m_FocusObj;

    public MonsterSO m_MonsterSO;

    private void Awake()
    {
        m_Spren = GetComponent<SpriteRenderer>();
        m_Point = FindObjectOfType<MonsterSpawnManager>().m_Point;
        m_UnitManager = FindObjectOfType<UnitSpawnManager>();
    }

    private void OnEnable()
    {
        m_Stage = GameManager.Instance.m_Stage + 1;
        m_MaxHP = (int)(m_MonsterSO.m_HP[GameManager.Instance.m_Stage] * (1 + (GameManager.Instance.m_BonusStage * 0.1f)));
        m_HP = m_MaxHP;
        m_Armor = m_UnitManager.GetBuffs(ATTACKTYPE.∞¸≈Î«¸) ?
            (int)(m_MonsterSO.m_Armor[GameManager.Instance.m_Stage] * (1 + (GameManager.Instance.m_BonusStage * 0.1f)) * 0.5f):
            (int)(m_MonsterSO.m_Armor[GameManager.Instance.m_Stage] * (1 + (GameManager.Instance.m_BonusStage * 0.1f)));
        m_Gold = m_MonsterSO.m_Gold[GameManager.Instance.m_Stage];
        m_MoveSpeed = m_MonsterSO.m_MoveSpeed[GameManager.Instance.m_Stage];
        m_type = SetArmorType(GameManager.Instance.m_Stage);
        m_Color = SetColor(m_type);
        m_Spren.color = m_Color;
        m_FocusObj.SetActive(false);
        transform.localScale = m_MonsterSO.m_IsBoss[GameManager.Instance.m_Stage] == true ? Vector2.one * 1.5f : Vector2.one;

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
        yield return null;

        int nextPoint = 0;

        while (gameObject.activeSelf)
        {
            Vector3 dir = (m_Point[nextPoint].position - transform.position).normalized;
            transform.position += dir * m_MoveSpeed * Time.deltaTime;

            m_Spren.flipX = dir.x >= 0;

            if (Vector2.SqrMagnitude(m_Point[nextPoint].position - transform.position) < 0.1f)
            {
                nextPoint++;
                if (nextPoint == m_Point.Length)
                {
                    nextPoint = 0;
                }
            }
            yield return new WaitForSeconds(Time.deltaTime);
        }
    }
    public bool OnDamage(ATTACKTYPE _attackType, int _damage, UNITTIER _tier)
    {
        if (m_UnitManager.GetBuffs(ATTACKTYPE.Ω≈∫Ò«¸))
        {
            if (Random.Range(0, 5) == 4)
            {
                _damage = (int)(_damage * 2f);
                if (GameManager.Instance.m_IsEffect != 2)
                {
                    GameObject obj = ObjectPoolingManager.Instance.GetQueue(ObjectPoolingManager.m_Effect01Key);
                    obj.transform.position = transform.position;
                    if (GameManager.Instance.m_IsEffect == 1)
                    {
                        obj.transform.localScale *= 0.5f;
                    }
                }
            }
        }

        _damage -= m_Armor;

        if ((int)_tier < (int)UNITTIER.≈¬√ )
        {
            switch (_attackType)
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
        }

        if (_damage >= 0)
        {
            m_HP -= _damage;
        }

        StartCoroutine(OnDamageEffect());

        if (m_UnitManager.m_FocusMonster == this)
        {
            m_UnitManager.MonsterTextUpdate();
        }

        if (m_HP <= 0)
        {
            MonsterDead();
            return true;
        }
        return false;
    }
    void MonsterDead()
    {
        if (m_UnitManager.m_FocusMonster == this)
        {
            m_FocusObj.SetActive(false);
            m_UnitManager.FocusMonsterSelect(null);
            m_UnitManager.m_MonsterSet.SetActive(false);
        }

        GameManager.Instance.m_Gold += m_Gold;
        GameManager.Instance.GoldTextUpdate();
        SoundManager.Instance.SoundPlay(SOUND_NAME.MonsterDead);
        ObjectPoolingManager.Instance.InsertQueue(gameObject, ObjectPoolingManager.m_Monster00Key);

        if (m_Stage == 151)
        {
            GameManager.Instance.GameClear();
        }
    }
    IEnumerator OnDamageEffect()
    {
        m_Spren.color = Color.red;

        yield return m_OnDamageEffectSec;

        m_Spren.color = m_Color;
    }
    public string GetStageText()
    {
        return m_Stage.ToString();
    }
    public string GetHPText()
    {
        return Utils.Calculation(m_HP);
    }
    public string GetMaxHPText()
    {
        return Utils.Calculation(m_MaxHP);
    }
    public string GetArmorText()
    {
        return m_Armor.ToString();
    }
    public string GetTypeText()
    {
        string type = "";
        switch (m_type)
        {
            case ARMORTYPE.∞Ê¿Â∞©:
                type = "∞Ê¿Â∞©";
                break;
            case ARMORTYPE.∆Øºˆ¿Â∞©:
                type = "∆Øºˆ¿Â∞©";
                break;
            case ARMORTYPE.¡ﬂ¿Â∞©:
                type = "¡ﬂ¿Â∞©";
                break;
        }
        return type;
    }
    public ARMORTYPE GetArmorType()
    {
        return m_type;
    }
    public Sprite GetSprite()
    {
        return m_Spren.sprite;
    }
    private void OnMouseDown()
    {
        if (m_UnitManager.m_FocusMonster != null)
        {
            m_UnitManager.m_FocusMonster.m_FocusObj.SetActive(false);
        }
        if (m_UnitManager.m_FocusTile != null)
        {
            m_UnitManager.m_FocusTile.m_Unit.OnFocusUnit(false);
        }
        m_FocusObj.SetActive(true);
        m_UnitManager.FocusMonsterSelect(this);
        m_UnitManager.m_UnitSet.SetActive(false);
        m_UnitManager.m_MonsterSet.SetActive(true);
        m_UnitManager.MonsterTextUpdate();
    }
    public void OnFocusMonster(bool _bool)
    {
        m_FocusObj.SetActive(_bool);
    }
    Color SetColor(ARMORTYPE _type)
    {
        Color color = Color.white;
        switch (_type)
        {
            case ARMORTYPE.∞Ê¿Â∞©:
                color = new Color(1f, 0.5f, 0.5f, 1);
                break;
            case ARMORTYPE.∆Øºˆ¿Â∞©:
                color = new Color(0.5f, 0.5f, 1f, 1);
                break;
            case ARMORTYPE.¡ﬂ¿Â∞©:
                color = new Color(1f, 1f, 0.5f, 1);
                break;
        }
        return color;
    }
    ARMORTYPE SetArmorType(int _stage)
    {
        ARMORTYPE type = m_MonsterSO.m_type[_stage];

        switch (type)
        {
            case ARMORTYPE.∞Ê¿Â∞©:
                type = ARMORTYPE.∞Ê¿Â∞©;
                break;
            case ARMORTYPE.∆Øºˆ¿Â∞©:
                type = ARMORTYPE.∆Øºˆ¿Â∞©;
                break;
            case ARMORTYPE.¡ﬂ¿Â∞©:
                type = ARMORTYPE.¡ﬂ¿Â∞©;
                break;
            case ARMORTYPE.π´¿€¿ß:
                int ran2 = Random.Range(0, 3);
                switch (ran2)
                {
                    case 0:
                        type = ARMORTYPE.∞Ê¿Â∞©;
                        break;
                    case 1:
                        type = ARMORTYPE.∆Øºˆ¿Â∞©;
                        break;
                    case 2:
                        type = ARMORTYPE.¡ﬂ¿Â∞©;
                        break;
                }
                break;
        }

        return type;
    }
}
