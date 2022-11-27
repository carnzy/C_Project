#include<bits/stdc++.h>
using namespace std;



int main()
{
    char a[2015];
    int t = 0;
    for (int j = 0; j < 106; j++)
        for (int i = 0; i < 19; i++)
            a[t++] = 'a' + i;
    a[t] = 0;
    int k;
    while (t != 1)
    {
        k = 0;
        for (int j = 1; j < t; j += 2)
            a[k++] = a[j];
        a[k] = '\0';
        t = k;
    }
    cout << a << endl;
    return 0;
}