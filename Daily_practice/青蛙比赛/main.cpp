#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int frogPoints(string ops[],int round ){
    int n,i;
    //int n=sizeof(*ops)/sizeof(ops[0]);
    int *res;
    cout<<"请输入计分轮数：";
    
    cin>>n;
    cout<<"结果："<<endl;
    //scanf("%d,&n");
    res=new int[n];
    res[0]=stoi(ops[0]);
    for( i=1;i<n;i++)
    {
        res[i]=0;
    }
    
    for( i=1;i<round;i++)
    {
        if(ops[i]=="+")
        {
            res[i]=res[i-1]+res[i-1]+res[i-2];
            //cout<<res[i]<<endl;
        }
        else if(ops[i]=="C")
        {
            res[i]=res[i-1]-stoi(ops[i-1]);
            //cout<<res[i]<<endl;
        }
        else if(ops[i]=="D")
        {
            res[i]=2*res[i-1]+res[i-1];
            //cout<<res[i]<<endl;
        }
        else{
            res[i]=stoi(ops[i])+res[i-1];
            //cout<<res[i]<<endl;
        }
    }
    //int r=res[i];//因为出循环了，循环外的i我们没有赋值，当然是系统给的随机数
    return res[n-1];
}

int main(){
    int n;
    string *a;//a是记录数组
    cout<<"请输入轮数";
    scanf("%d",&n);
    a=new string[n];
    cout<<"请输入比赛记录情况";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // cout<<"记录确认："<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<endl;
    // }
    //cout<<"结果："<<endl;
    cout<<frogPoints(a,n);
}