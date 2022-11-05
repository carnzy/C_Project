#include<stdio.h>
int cut_noodles(int times)
{
    int result = 2, t = 1;  
    for(int i = 0; i < times; i++)
    {
        result += t;
        t = t*2;
    }                   /*第一次for循环result从2变为3，result先变，t后变。
    result的变化过程是2，3，5，9，每次的增量是2的n-1次方，n是第几次变化
    所以for循环中应该是一个变量每次乘2，result+=这个变量，result是先变化，所以先写*/
    return result;
}

int main() {
    int result;
    int times = 10;
    result = cut_noodles(times);
    printf("对折%d次，从中间切一刀得到的面条数是%d\n",times,result);
    return 0;
}