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
    int row=1;//����һ��
    while(row < numRows - 1)//�����У���һ����Ϊ��������һ��
    {
        arr.push_back(1);//��һ�еĵ�һ��1
        for(int i=0;i<res[row].size()-1;i++)
        {
            int temp=0;
            temp=res[row][i]+res[row][i+1];
            arr.push_back(temp);
        }//�չ��������һ�е��м�������û��ͷ��β��1��һ������
        arr.push_back(1);//��һ�е����һ��1
        res.push_back(arr);//arrƴ�ӵ�res��β�ʹ�
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
    cout<<"����������"<<endl;
    cin>>num;
    getchar();
    output(generate(num));
    return 0;
}