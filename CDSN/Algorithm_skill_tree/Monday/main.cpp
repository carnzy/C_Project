#include <stdio.h>
int main()
{
    int year, day, dayrun = 0, dayping = 0, sumday = 0;//run闰年，ping平年，
    int count = 0;

    for (year = 1901; year <= 2000; year++)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            dayrun += 366;
        }
        else
        {
            dayping += 365;
        }
    }

    sumday = dayrun + dayping;

    for (day = 2; day <= sumday - 7; day += 7)//这里day是什么？为什么从2开始？
    //从每次循环最后的+7和循环体内计数操作看，这个day就是用在这个for循环用来计数用
    {
        count++;
    }
    printf("%d", count);
    return 0;
}