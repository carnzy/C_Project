
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, ans = 0, son[100000], sum[100000], b[100000] = {0};
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> son[i];
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