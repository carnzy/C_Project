#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, ans = 0, son[10000], sum[10000], b[10000] = {0};
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> son[i];//1,2,3,4,5
        if (i != 0)
            sum[i] = (sum[i - 1] + son[i]) % k;
        else
            sum[i] = son[i] % k;
        b[sum[i]]++;
        ans += b[sum[i]] - 1;
        if (sum[i] == 0)
            ans++;
    }
    cout << ans;
    return 0;
}