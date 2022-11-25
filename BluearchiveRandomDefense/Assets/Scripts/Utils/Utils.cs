using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Utils
{
    public const int K = 1000;
    public const float _K = 0.001f;
    public const int M = 1000000;
    public const float _M = 0.000001f;

    public static string Calculation(int _int)
    {
        if (_int >= M)
        {
            return string.Format("{0:F2}M", (float)_int * _M);
        }
        else if (_int >= K)
        {
            return string.Format("{0:F2}K", (float)_int * _K);
        }
        else
        {
            return $"{_int}";
        }
    }
}
