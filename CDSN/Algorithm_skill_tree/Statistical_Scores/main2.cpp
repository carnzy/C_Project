#include <bits/stdc++.h>//万能头，仅限竞赛使用；因为包含了可能没用到的头文件，会增加编译时间
using namespace std;

int main()
{
    struct student
    {
        string xm;
        int xh;
        double yy;
        double sx;
        double cpp;
    };
    student a[1000];
    int n;
    double sum = 0, min = 301, max = 0;
    string mins, maxs;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].xm >> a[i].xh >> a[i].yy >> a[i].sx >> a[i].cpp;
        sum = a[i].yy + a[i].sx + a[i].cpp;
        if (min > sum)
        {
            min = sum;
            mins = a[i].xm;
        }
        if (max < sum)
        {
            max = sum;
            maxs = a[i].xm;
        }
    }
    cout << maxs << endl
         << mins;
    return 0;
}