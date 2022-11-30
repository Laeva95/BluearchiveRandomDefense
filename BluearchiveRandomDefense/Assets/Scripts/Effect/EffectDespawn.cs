using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectDespawn : MonoBehaviour
{
    [SerializeField]
    int EffectKey;
    void OnEnable()
    {
        StartCoroutine(DespawnCoroutine());
    }

    IEnumerator DespawnCoroutine()
    {
        yield return new WaitForSeconds(1f);

        ObjectPoolingManager.Instance.InsertQueue(gameObject, EffectKey);
    }
}
