using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectDespawn : MonoBehaviour
{
    void OnEnable()
    {
        StartCoroutine(DespawnCoroutine());
    }

    IEnumerator DespawnCoroutine()
    {
        yield return new WaitForSeconds(1f);

        ObjectPoolingManager.Instance.InsertQueue(gameObject, ObjectPoolingManager.m_Effect00Key);
    }
}
