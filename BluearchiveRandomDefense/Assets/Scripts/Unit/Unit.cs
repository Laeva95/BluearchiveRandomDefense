using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public enum UNITTIER
{
    일반 = 0,
    레어 = 1,
    고대 = 2,
    유물 = 3,
    서사 = 4,
    전설 = 5,
    신화 = 6,
    태초 = 7,
}
public enum ATTACKTYPE
{
    폭발형 = 0,
    신비형 = 1,
    관통형 = 2,
}
public abstract class Unit : MonoBehaviour
{
    [SerializeField]
    protected UNITTIER m_Tier;
    [SerializeField]
    protected ATTACKTYPE m_Type;
    protected int m_Damage;
    protected int m_Level;
    protected float m_Range;
    protected float m_AttackDelay;
    protected string m_Name;
    protected SpriteRenderer m_Halo;
    protected WaitForSeconds m_AttackDelaySec;
    protected TextMeshProUGUI m_NameText;
    protected Animator m_Ani;

    [SerializeField]
    protected UnitSO m_UnitSO;

    private void Awake()
    {
        m_Halo = GetComponent<SpriteRenderer>();
        m_NameText = GetComponentInChildren<TextMeshProUGUI>();
        m_Ani = GetComponent<Animator>();

        StartCoroutine(Attack());
    }
    public virtual IEnumerator Attack()
    {
        while (gameObject.activeSelf)
        {
            Collider2D monsterObj = Physics2D.OverlapCircle(transform.position, m_Range, LayerMask.GetMask("Monster"));

            if (monsterObj != null)
            {
                Monster monster = monsterObj.gameObject.GetComponent<Monster>();

                monster.OnDamage(m_Type, TotalDamage(), m_Tier);

                m_Ani.SetTrigger("Attack");
            }

            yield return m_AttackDelaySec;
        }
    }
    public void SetStatus(ATTACKTYPE _type,int _index)
    {
        m_Type = _type;
        m_Halo.sprite = m_UnitSO.m_Sprites[_index];
        m_Name = m_UnitSO.m_Names[_index];
        m_Damage = m_UnitSO.m_Damages[_index];
        m_NameText.text = m_Name;
        switch (_type)
        {
            case ATTACKTYPE.폭발형:
                m_NameText.color = Color.red;
                break;
            case ATTACKTYPE.신비형:
                m_NameText.color = Color.blue;
                break;
            case ATTACKTYPE.관통형:
                m_NameText.color = Color.yellow;
                break;
        }
    }
    public void SetLevel(int _level)
    {
        m_Level = _level;
    }
    public int TotalDamage()
    {
        return m_Damage * (m_Level + 1);
    }
    private void OnDestroy()
    {
        StopAllCoroutines();
    }

    protected GameObject SpawnEffect(ATTACKTYPE _type)
    {
        GameObject obj =  ObjectPoolingManager.Instance.GetQueue(ObjectPoolingManager.m_Effect00Key);
        ParticleSystem particle = obj.GetComponent<ParticleSystem>();
        ParticleSystem.MainModule module = particle.main;
        switch (_type)
        {
            case ATTACKTYPE.폭발형:
                module.startColor = Color.red;
                break;
            case ATTACKTYPE.신비형:
                module.startColor = Color.blue;
                break;
            case ATTACKTYPE.관통형:
                module.startColor = Color.yellow;
                break;
        }
        particle.Play();

        return obj;
    }
    public string GetDamageText()
    {
        return $"{m_Damage} + {m_Damage * (m_Level)}";
    }
    public string GetNameText()
    {
        return m_Name;
    }
    public string GetRangeText()
    {
        return m_Range.ToString();
    }
    public string GetTypeText()
    {
        string type = "";
        switch (m_Type)
        {
            case ATTACKTYPE.폭발형:
                type = "폭발형";
                break;
            case ATTACKTYPE.신비형:
                type = "신비형";
                break;
            case ATTACKTYPE.관통형:
                type = "관통형";
                break;
        }
        return type;
    }
    public string GetTierText()
    {
        string tier = "";
        switch (m_Tier)
        {
            case UNITTIER.일반:
                tier = "일반";
                break;
            case UNITTIER.레어:
                tier = "레어";
                break;
            case UNITTIER.고대:
                tier = "고대";
                break;
            case UNITTIER.유물:
                tier = "유물";
                break;
            case UNITTIER.서사:
                tier = "서사";
                break;
            case UNITTIER.전설:
                tier = "전설";
                break;
            case UNITTIER.신화:
                tier = "신화";
                break;
            case UNITTIER.태초:
                tier = "태초";
                break;
        }
        return tier;
    }
    public UNITTIER GetTier()
    {
        return m_Tier;
    }
    public ATTACKTYPE GetAttackType()
    {
        return m_Type;
    }
    public Sprite GetSprite()
    {
        return m_Halo.sprite;
    }
}
