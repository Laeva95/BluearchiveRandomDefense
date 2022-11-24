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
    [SerializeField]
    int m_Stage;
    int m_HP;
    int m_Armor;
    int m_Gold;
    float m_MoveSpeed;
    ARMORTYPE m_type;
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
        m_HP = m_MonsterSO.m_HP[GameManager.Instance.m_Stage];
        m_Armor = m_MonsterSO.m_Armor[GameManager.Instance.m_Stage];
        m_Gold = m_MonsterSO.m_Gold[GameManager.Instance.m_Stage];
        m_MoveSpeed = m_MonsterSO.m_MoveSpeed[GameManager.Instance.m_Stage];
        m_type = m_MonsterSO.m_type[GameManager.Instance.m_Stage];
        m_Spren.color = Color.white;
        m_Stage = GameManager.Instance.m_Stage + 1;
        m_FocusObj.SetActive(false);

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
            transform.position += dir * m_MoveSpeed * 0.0166667f;

            m_Spren.flipX = dir.x >= 0;

            if (Vector2.SqrMagnitude(m_Point[nextPoint].position - transform.position) < 0.1f)
            {
                nextPoint++;
                if (nextPoint == m_Point.Length)
                {
                    nextPoint = 0;
                }
            }
            yield return new WaitForSeconds(0.0166667f);
        }
    }
    public void OnDamage(ATTACKTYPE _attackType, int _damage, UNITTIER _tier)
    {
        _damage -= m_Armor;

        if (_tier != UNITTIER.����)
        {
            switch (_attackType)
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
            case ARMORTYPE.���尩:
                type = "���尩";
                break;
            case ARMORTYPE.Ư���尩:
                type = "Ư���尩";
                break;
            case ARMORTYPE.���尩:
                type = "���尩";
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
