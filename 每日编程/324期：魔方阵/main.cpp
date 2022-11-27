#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    getchar();
    vector<vector<int>> f(n);
    for(int i=0;i<f.size();i++)
    {
        f[i].resize(n);
    }
    int r=0,c=n/2;
    f[r][c]=1;
    for(int i=2;i<=n*n;i++)
    {
        if((r==0)&&(c==n-1))//第一行第n列
        {
            f[++r][c]=i;//放下面
            continue;
        }
        if(r==0)//第一行
        {
            r=n-1;//行减一到最后一行
            c++;//列增
            f[r][c]=i;
            continue;
        }
        if(c==n-1)//最后一列
        {
            c=0;//列增到第一列
            r--;//行减
            f[r][c]=i;
            continue;
        }
        r--;//写完特殊情况写常规
        c++;
        if(f[r][c])//已被占
        {
            r++;//退回原位置
            c--;
            r++;//放下面
            f[r][c]=i;
        }else{
            f[r][c]=i;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==n-1){//遍历，列满换行，未满隔空
                cout<<setw(2)<<f[i][j]<<endl;
            }else{
                cout<<setw(2)<<f[i][j]<<" ";
            }
        }
    }
    return 0;
}