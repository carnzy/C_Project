#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
typedef pair<int, int> PII;
#define x first
#define y second
PII logs[N];
bool st[N];
int cnt[N];

int main()
{
    int n, d, k;
    cin >> n >> d >> k;
    for (int i = 0; i < n; i++)
        cin >> logs[i].x >> logs[i].y;

    sort(logs, logs + n);

    for (int i = 0, j = 0; i < n; i++)
    {
        cnt[logs[i].y]++;//第i+1个id的帖子的点赞数加一
        while (logs[i].x - logs[j].x >= d)//当第i+1个时间戳与第j+1个时间戳的时间差大于等于d
            cnt[logs[j].y]--, j++;//第j+1个id对应的点赞数减一，id跳至下一个
        if (cnt[logs[i].y] >= k)//id对应的点赞数大于等于k时
            st[logs[i].y] = true;//确定为热帖
    }

    for (int i = 0; i < N; i++)
        if (st[i])
            cout << i << endl;
    return 0;
}