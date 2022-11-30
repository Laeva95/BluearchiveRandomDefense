using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPoolingManager : MonoBehaviour
{
    [SerializeField] GameObject m_Monster00;

    [SerializeField] GameObject m_Effect00;
    [SerializeField] GameObject m_Effect01;

    [SerializeField] GameObject m_Unit00;
    [SerializeField] GameObject m_Unit01;
    [SerializeField] GameObject m_Unit02;
    [SerializeField] GameObject m_Unit03;
    [SerializeField] GameObject m_Unit04;
    [SerializeField] GameObject m_Unit05;
    [SerializeField] GameObject m_Unit06;
    [SerializeField] GameObject m_Unit07;
    [SerializeField] GameObject m_Unit08;

    public const int m_Monster00Key = 0;

    public const int m_Effect00Key = 100;
    public const int m_Effect01Key = 101;

    public const int m_Unit00Key = 10;
    public const int m_Unit01Key = 11;
    public const int m_Unit02Key = 12;
    public const int m_Unit03Key = 13;
    public const int m_Unit04Key = 14;
    public const int m_Unit05Key = 15;
    public const int m_Unit06Key = 16;
    public const int m_Unit07Key = 17;
    public const int m_Unit08Key = 18;

    private Queue<GameObject> m_Monster00Queue = new Queue<GameObject>();

    private Queue<GameObject> m_Effect00Queue = new Queue<GameObject>();
    private Queue<GameObject> m_Effect01Queue = new Queue<GameObject>();

    private Queue<GameObject> m_Unit00Queue = new Queue<GameObject>();
    private Queue<GameObject> m_Unit01Queue = new Queue<GameObject>();
    private Queue<GameObject> m_Unit02Queue = new Queue<GameObject>();
    private Queue<GameObject> m_Unit03Queue = new Queue<GameObject>();
    private Queue<GameObject> m_Unit04Queue = new Queue<GameObject>();
    private Queue<GameObject> m_Unit05Queue = new Queue<GameObject>();
    private Queue<GameObject> m_Unit06Queue = new Queue<GameObject>();
    private Queue<GameObject> m_Unit07Queue = new Queue<GameObject>();
    private Queue<GameObject> m_Unit08Queue = new Queue<GameObject>();



    public Dictionary<int, Queue<GameObject>> m_queueDic = new Dictionary<int, Queue<GameObject>>();

    private static ObjectPoolingManager instance;
    public static ObjectPoolingManager Instance
    {
        get
        {
            if (instance == null)
            {
                return null;
            }
            return instance;
        }
    }

    void Awake()
    {
        if (instance == null)
        {
            // instance가 비어있을 경우 해당 객체를 넣어줌
            instance = this;
        }

        m_queueDic.Add(m_Monster00Key, m_Monster00Queue);

        m_queueDic.Add(m_Effect00Key, m_Effect00Queue);
        m_queueDic.Add(m_Effect01Key, m_Effect01Queue);

        m_queueDic.Add(m_Unit00Key, m_Unit00Queue);
        m_queueDic.Add(m_Unit01Key, m_Unit01Queue);
        m_queueDic.Add(m_Unit02Key, m_Unit02Queue);
        m_queueDic.Add(m_Unit03Key, m_Unit03Queue);
        m_queueDic.Add(m_Unit04Key, m_Unit04Queue);
        m_queueDic.Add(m_Unit05Key, m_Unit05Queue);
        m_queueDic.Add(m_Unit06Key, m_Unit06Queue);
        m_queueDic.Add(m_Unit07Key, m_Unit07Queue);
        m_queueDic.Add(m_Unit08Key, m_Unit08Queue);


        InitQueue(m_Monster00, m_Monster00Queue, 10);

        InitQueue(m_Effect00, m_Effect00Queue, 10);
        InitQueue(m_Effect01, m_Effect01Queue, 10);

        InitQueue(m_Unit00, m_Unit00Queue, 10);
        InitQueue(m_Unit01, m_Unit01Queue, 10);
        InitQueue(m_Unit02, m_Unit02Queue, 10);
        InitQueue(m_Unit03, m_Unit03Queue, 10);
        InitQueue(m_Unit04, m_Unit04Queue, 10);
        InitQueue(m_Unit05, m_Unit05Queue, 10);
        InitQueue(m_Unit06, m_Unit06Queue, 10);
        InitQueue(m_Unit07, m_Unit07Queue, 10);
        InitQueue(m_Unit08, m_Unit08Queue, 10);

    }

    // 오브젝트 풀 Queue에 오브젝트를 생성해서 채워주는 초기화 함수
    private void InitQueue(GameObject _obj, Queue<GameObject> _queue, int _count)
    {
        for (int i = 0; i < _count; i++)
        {
            // 예상하지 않은 충돌을 방지하기 위해 멀리 떨어진 곳에서 생성
            GameObject obj = Instantiate(_obj, new Vector3(5000, 5000), Quaternion.identity);
            _queue.Enqueue(obj);

            obj.SetActive(false);
        }
    }

    // 사용한 오브젝트를 다시 큐에 넣기 위한 함수
    public void InsertQueue(GameObject _obj, int _queueKey)
    {
        // 오브젝트의 속성 초기화
        Rigidbody2D rigid = _obj.GetComponent<Rigidbody2D>();
        if (rigid != null)
        {
            rigid.velocity = Vector3.zero;
            rigid.angularVelocity = 0f;
        }
        _obj.transform.position = new Vector3(5000, 5000);
        _obj.transform.rotation = Quaternion.identity;

        m_queueDic[_queueKey].Enqueue(_obj);
        _obj.SetActive(false);
    }

    // 오브젝트 풀에서 사용할 오브젝트를 꺼내는 함수
    public GameObject GetQueue(int _queueKey)
    {
        GameObject obj = m_queueDic[_queueKey].Dequeue();

        // 큐에 오브젝트가 남아있지 않으면 추가 생성
        if (m_queueDic[_queueKey].Count < 1)
        {
            InitQueue(obj, m_queueDic[_queueKey], 10);
        }

        obj.SetActive(true);
        return obj;
    }
}
