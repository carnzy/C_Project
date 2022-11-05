#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    int i = 0;
    int j = 0;
    int cnt = 2;
    int a[250][250];
    a[0][0] = 1;
    while (cnt < 1000)
    {
        j++;
        while (i != -1 && j != -1)
        {
            a[i][j] = cnt++;
            if (j == 0)
                break;
            i++;
            j--;
        }
        i++;
        while (i != -1 && j != -1)
        {
            a[i][j] = cnt ++;
            if (i == 0)
                break;
            i --;
            j ++;
        }
    }
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            cout << setw(5) << a[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << a[19][19];
    return 0;
}