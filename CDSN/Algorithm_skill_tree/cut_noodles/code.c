#include<stdio.h>
int cut_noodles(int times)
{
    int result = 2, t = 1;  
    for(int i = 0; i < times; i++)
    {
        result += t;
        t = t*2;
    }                   /*��һ��forѭ��result��2��Ϊ3��result�ȱ䣬t��䡣
    result�ı仯������2��3��5��9��ÿ�ε�������2��n-1�η���n�ǵڼ��α仯
    ����forѭ����Ӧ����һ������ÿ�γ�2��result+=���������result���ȱ仯��������д*/
    return result;
}

int main() {
    int result;
    int times = 10;
    result = cut_noodles(times);
    printf("����%d�Σ����м���һ���õ�����������%d\n",times,result);
    return 0;
}