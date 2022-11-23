using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public enum UNITTIER
{
    �Ϲ� = 0,
    ���� = 1,
    ��� = 2,
    ���� = 3,
    ���� = 4,
    ���� = 5,
    ��ȭ = 6,
    ���� = 7,
}
public enum ATTACKTYPE
{
    ������ = 0,
    �ź��� = 1,
    ������ = 2,
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
            case ATTACKTYPE.������:
                m_NameText.color = Color.red;
                break;
            case ATTACKTYPE.�ź���:
                m_NameText.color = Color.blue;
                break;
            case ATTACKTYPE.������:
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
            case ATTACKTYPE.������:
                module.startColor = Color.red;
                break;
            case ATTACKTYPE.�ź���:
                module.startColor = Color.blue;
                break;
            case ATTACKTYPE.������:
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
            case ATTACKTYPE.������:
                type = "������";
                break;
            case ATTACKTYPE.�ź���:
                type = "�ź���";
                break;
            case ATTACKTYPE.������:
                type = "������";
                break;
        }
        return type;
    }
    public string GetTierText()
    {
        string tier = "";
        switch (m_Tier)
        {
            case UNITTIER.�Ϲ�:
                tier = "�Ϲ�";
                break;
            case UNITTIER.����:
                tier = "����";
                break;
            case UNITTIER.���:
                tier = "���";
                break;
            case UNITTIER.����:
                tier = "����";
                break;
            case UNITTIER.����:
                tier = "����";
                break;
            case UNITTIER.����:
                tier = "����";
                break;
            case UNITTIER.��ȭ:
                tier = "��ȭ";
                break;
            case UNITTIER.����:
                tier = "����";
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
