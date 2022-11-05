#include<iostream>
#include<cstring>
using namespace std;
void shuchu(char *a, int m, int n)
{
    if(n <= 0 || m <= 0 || m > n)
    {
        return ;
    }
    else{
        cout << a[(m+n)/2];
        shuchu(a, m, (m + n)/2 - 1);
        shuchu(a, (m+n)/2+1, n);
    }
}
int main() {
    char a[20000];
    char b[20001];
    cin >> a;
    for(int i = 0; i < 20000; i++)
    {
        b[i + 1] = a[i];
    }
    int n = strlen(a);
    shuchu(b, 1, n);
    return 0;
}