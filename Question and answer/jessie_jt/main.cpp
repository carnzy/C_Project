#include<iostream>
using namespace std;

int main() {
    int m;
    cout << "please input array size:";
    cin >> m;
    int i;
    float a[m], n, sum=0;
    int isFind = 0;
    printf("please set array values:");
    for(i = 0; i < m; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < m; i++){
        sum += a[i];
    }
    n = sum/m;
    for(i = 0; i < m; i++){
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