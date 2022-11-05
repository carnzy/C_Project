#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int b[100005];
int max1;
int main(){
    int n;
    cin>>n;
    int a;
    for(int i=1;i<=n;i++){
        cin>>a;
        int c=fabs(a-i);
        b[c]++;
        if(a-i>max1){
            max1=a-i;
        }
    }
    for(int i=max1;i>=0;i--){
        if(b[i]!=0&&b[i]!=1){
            printf("%d %d\n",i,b[i]);
        }
    }
    return 0;
}
