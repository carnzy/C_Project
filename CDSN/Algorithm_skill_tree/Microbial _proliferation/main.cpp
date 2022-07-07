#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m;
    double x,y;
    scanf("%d%lf%lf",&n,&x,&y);
    m=1;
    while(m<=n)
    {
       if(m%2!=0)
       y=y-x;
       if(m%2==0)
       y=(y-x)*2;
       if(m%3==0)
       x*=2;
       //printf("m=%d x=%.0lf y=%.0lf\n",m,x,y);
       m++;
    }
    printf("x=%.0lf y=%.0lf\n",x,y);
    system("pause");
    return 0;
}
//解法二：
//提示：分析可知，Y分别会在0.5,1.5,2.5······时被吃，所以，把60分钟分成120份，则在除以2余数为1时，Y的数目减少X个
#include <iostream>
using namespace std;
int main()
{
    int x = 10, y = 90;
    for (int i = 1; i <= 120; i++)
    {
        if(i%2==1)
        y-=x;
        if(i%4==0)
        y*=2;
        if(i%6==0)
        x*=2;
    }
    cout << y << endl;
}