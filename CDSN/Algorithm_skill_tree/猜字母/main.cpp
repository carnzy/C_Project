#include<bits/stdc++.h>
using namespace std;


int a[2014];
int main()
{
    int count = 2014;
    for (int i = 0; i < 2014; i++)
    {
        a[i] = i ;
    }
    do
    {
        for (int i = 0; i <= count - 1; i += 2)
            a[i] = 0;
        count = 0;
        for (int j = 0; j <= 2013; j++)
        {
            if (a[j] != 0)
            {
                a[count] = a[j];
                a[j] = 0;
                count++;
            }
        }
    } while (count != 1);
    cout << char('a' + (a[0] % 19));
    return 0;
}