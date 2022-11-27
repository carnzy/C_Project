#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    if(numRows<=0)
    {
        return {};
    }
    if(numRows==1)
    {
        return{{1}};
    }
    if(numRows==2)
    {
        return{{1},{1,1}};
    }
    vector<vector<int>> res={{1},{1,1}};
    vector<int> arr;
    int row=1;
    while(row < numRows - 1)
    {
        arr.push_back(1);
        for(int i=0;i<res[row].size()-1;i++)
        {
            int temp=0;
            temp=res[row][i]+res[row][i+1];
            arr.push_back(temp);
        }
        arr.push_back(1);
        res.push_back(arr);
        arr.clear();
        row++;
    }
    for (int i = 0; i < res.size(); i++)
    {
        for(int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    return res;
}

int main(){
    int num=0;
    cout<<"请输入行数"<<endl;
    cin>>num;
    getchar();
    generate(num);
    return 0;
}