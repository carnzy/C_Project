#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int frogPoints(string ops[],int round ){
    int n,i;
    //int n=sizeof(*ops)/sizeof(ops[0]);
    int *res;
    cout<<"������Ʒ�������";
    
    cin>>n;
    cout<<"�����"<<endl;
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
    //int r=res[i];//��Ϊ��ѭ���ˣ�ѭ�����i����û�и�ֵ����Ȼ��ϵͳ���������
    return res[n-1];
}

int main(){
    int n;
    string *a;//a�Ǽ�¼����
    cout<<"����������";
    scanf("%d",&n);
    a=new string[n];
    cout<<"�����������¼���";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // cout<<"��¼ȷ�ϣ�"<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<endl;
    // }
    //cout<<"�����"<<endl;
    cout<<frogPoints(a,n);
}