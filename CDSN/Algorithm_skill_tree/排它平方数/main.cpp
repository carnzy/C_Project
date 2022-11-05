#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num[10], flag;
    for (long long i = 123456; i <= 987654; i++)
    {
        long long a = i;
        long long b = i * i;
        memset(num, 0, sizeof(num));//10位全置0
        flag = 1;
        while (a)
        {
            if (num[a % 10])
            {
                flag = 0;
                break;
            }
            num[a % 10]++;
            a /= 10;
        }//因为10位被全部置0，所以这里是把这个数本身含有的数字做标记1
        if (flag)
        {
            while (b)
            {
                if (num[b % 10])
                {
                    flag = 0;
                    break;
                }
                b /= 10;
            }
            if (flag)
                cout << i << endl;
        }//同上，把它的平方数在上一步的基础上判断是否有和它本身重复的数字出现
    }
    return 0;
}