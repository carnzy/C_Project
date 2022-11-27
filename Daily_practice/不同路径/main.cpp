#include<iostream>
#include<vector>
using namespace std;

    int uniquePaths(int m, int n) {
        vector<vector<int>> f(m, vector<int>(n));
        for (int i = 0; i < m; ++i) {
            f[i][0] = 1;
        }
        for (int j = 0; j < n; ++j) {
            f[0][j] = 1;
        }//第一行和第一列的可能性只能为1，因为每次只能向下或右
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                f[i][j] = f[i - 1][j] + f[i][j - 1];
            }
        }//除去第一行、第一列开始计算，每个格子是上加左
        return f[m - 1][n - 1];//返回最后一个格子（右下角）
    }

int main(){
    int m,n;
    cout<<"请输入行数，列数：";
    cin>>m>>n;
    cout<<uniquePaths(m,n);
    return 0;
}