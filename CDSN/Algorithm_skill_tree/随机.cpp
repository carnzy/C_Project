#include<stdio.h>
void f(int x[],int n)
{
    if (n>1)
    {
        printf("%d",x[n-1]);
        f(x,n-1);
        printf("%d",x[n-1]);
    }
    else
    printf("%d",x[n-1]);

}

int main(){
    int a[4] = {1,2,3,4};
    f(a,4);
}