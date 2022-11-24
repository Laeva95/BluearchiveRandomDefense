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
    [SerializeField]
    int m_Stage;
    int m_HP;
    int m_Armor;
    int m_Gold;
    int m_NextPoint;
    float m_MoveSpeed;
    bool m_IsBoss;
    ARMORTYPE m_type;
    WaitForSeconds m_OnDamageEffectSec = new WaitForSeconds(0.1f);
    SpriteRenderer m_Spren;
    Transform[] m_Point;
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
        m_HP = m_MonsterSO.m_HP[GameManager.Instance.m_Stage];
        m_Armor = m_MonsterSO.m_Armor[GameManager.Instance.m_Stage];
        m_Gold = m_MonsterSO.m_Gold[GameManager.Instance.m_Stage];
        m_MoveSpeed = m_MonsterSO.m_MoveSpeed[GameManager.Instance.m_Stage] * 0.8f;
        m_type = m_MonsterSO.m_type[GameManager.Instance.m_Stage];
        m_IsBoss = m_MonsterSO.m_IsBoss[GameManager.Instance.m_Stage];
        m_Spren.color = Color.white;
        m_Stage = GameManager.Instance.m_Stage + 1;
        m_FocusObj.SetActive(false);

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

            m_Spren.flipX = dir.x >= 0;

            if (Mathf.Abs(transform.position.x - m_Point[m_NextPoint].position.x) < 0.1 &&
                Mathf.Abs(transform.position.y - m_Point[m_NextPoint].position.y) < 0.1)
            {
                m_NextPoint++;
                if (m_NextPoint == m_Point.Length)
                {
                    m_NextPoint = 0;
                }
            }
            yield return new WaitForSeconds(Time.deltaTime);
        }
    }
    public void OnDamage(ATTACKTYPE _attackType, int _damage, UNITTIER _tier)
    {
        _damage -= m_Armor;

        if (_tier != UNITTIER.≈¬√ )
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
        }
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

        if (m_Stage == 101)
        {
            GameManager.Instance.GameClear();
        }
    }
    IEnumerator OnDamageEffect()
    {
        m_Spren.color = Color.red;

        yield return m_OnDamageEffectSec;

        m_Spren.color = Color.white;
    }
    public string GetStageText()
    {
        return m_Stage.ToString();
    }
    public string GetHPText()
    {
        return string.Format("{0:N0}", m_HP.ToString());
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
}
