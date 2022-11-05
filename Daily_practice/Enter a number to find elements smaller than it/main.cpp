#include<stdio.h>

int main() {
    int a[10], i, n;
    int isFind = 0;
    printf("please set array values:");
    for(i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    printf( "please enter one num:") ;
    scanf("%d", &n);
    for(i = 0; i < 10; i++){
        if(a[i] < n){
            isFind = 1;
            printf("%d ", a[i]);//加个空格
        }
    }
    if(isFind){
        printf("\n");
    }else{
        printf("not find\n");
    }
    return 0;
}