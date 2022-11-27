#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> res={{1},{1,1}};
    if(numRows<=0)
    {
        return res={};
    }
    if(numRows==1)
    {
        return res={{1}};
    }
    if(numRows==2)
    {
        return res={{1},{1,1}};
    }
    vector<int> arr;
    int row=1;//至少一行
    while(row < numRows - 1)//遍历行，减一是因为本来就有一行
    {
        arr.push_back(1);//下一行的第一个1
        for(int i=0;i<res[row].size()-1;i++)
        {
            int temp=0;
            temp=res[row][i]+res[row][i+1];
            arr.push_back(temp);
        }//照规则算出下一行的中间数（即没有头和尾的1的一行数）
        arr.push_back(1);//下一行的最后一个1
        res.push_back(arr);//arr拼接到res的尾巴处
        arr.clear();
        row++;
    }
    return res;
}

void output(vector<vector<int>> res){
        for (int i = 0; i < res.size(); i++)
    {
        for(int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
}
int main(){
    int num=0;
    cout<<"请输入行数"<<endl;
    cin>>num;
    getchar();
    output(generate(num));
    return 0;
}