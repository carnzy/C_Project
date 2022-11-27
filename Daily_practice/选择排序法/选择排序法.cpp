#include<iostream>
using namespace std;

int main(){
    int a[10];
    int i,j,temp=0;
    int k,x=0;
    cout<<"请输入10个整数"<<endl;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++){
        k=i;
        for(j=i+1;j<10;j++){
            if(a[j]<a[k])
            k=j;
        }
        temp=a[i];
        a[i]=a[k];
        a[k]=temp;
    }
    cout<<"排序后"<<endl;
    for(i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    getchar();
    getchar();
}