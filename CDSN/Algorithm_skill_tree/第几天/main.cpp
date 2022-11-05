#include <cstdio>
#include <algorithm>
using namespace std;

int month[13][2] = {{0, 0}, {31, 31}, {28, 29}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}, {31, 31}, {30, 30}, {31, 31}, {30, 30}, {31, 31}};
bool isleap(int year)
{
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

int main()
{
    int y1, m1, d1;
    int y2, m2, d2;
    int time1, time2;
    scanf("%d%d", &time1, &time2);
    if (time1 > time2)
        swap(time1, time2);

    y1 = time1 / 10000, m1 = time1 % 10000 / 100, d1 = time1 % 100;
    y1 = time2 / 10000, m2 = time2 % 10000 / 100, d2 = time2 % 100;

    int ans = 1;
    while (y1 < y2 || m1 < m2 || d1 < d2)
    {
        d1++;
        if (d1 == month[m1][isleap(y1)] + 1)
        {
            d1 = 1;
            m1++;
        }
        if (m1 == 13)
        {
        m1 = 1;
        y1++;
        }
        ans++;
    }
    printf("%d\n", ans);
    return 0;
}