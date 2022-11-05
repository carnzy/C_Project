#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char a[100] = {0};
    int i;
    int Pe = 1;
    int Ne = 1;
    printf("ÇëÊäÈë×Ö·û´®£º");
    gets(a);
    for(i = 1; i < strlen(a); i++){
        if(a[i] < a[i-1]){
            Pe = 0;
            break;
        }
    }
    for(i = 1; i < strlen(a); i++){
        if(a[i] > a[i-1]){
            Ne = 0;
            break;
        }
    }
    if(Pe && !Ne){
        printf("Positive elegance\n");
    }else if(!Pe && Ne){
        printf("Negative elegance\n");
    }else{
        printf("Non elegance\n");
    }
    return 0;
}