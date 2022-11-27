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
        }//��һ�к͵�һ�еĿ�����ֻ��Ϊ1����Ϊÿ��ֻ�����»���
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                f[i][j] = f[i - 1][j] + f[i][j - 1];
            }
        }//��ȥ��һ�С���һ�п�ʼ���㣬ÿ���������ϼ���
        return f[m - 1][n - 1];//�������һ�����ӣ����½ǣ�
    }

int main(){
    int m,n;
    cout<<"������������������";
    cin>>m>>n;
    cout<<uniquePaths(m,n);
    return 0;
}