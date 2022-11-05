#include <stdio.h>
int main()
{
    double m = 4537;//共4537个人
    double min = 9999999;
    double k, sum, ans;//k个人一组
    for (k = 1; k <= 100; k++)
    {
        sum = m / k + 0.01 * m * k ;//没有病例为m/k个
        //每0.01个m会有一个病例，它们所在的组的人均需再测一次
        if(sum < min)
        {
            min = sum;//更新最小数
            ans = k;//记录k值
        }
    }
    printf("%d\n", (int)ans);
    return 0;
}