#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){
    int n, a, b, m;
    scanf("%d", &n);
    vector<int> couple(100000, -1);//初始化100000个全为-1
    for(int i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);
        couple[a] = b;
        couple[b] = a;//互存对方的值以形成配对关系
    }
    scanf("%d", &m);
    vector<int> guest(m), isExist(100000);//guest是m个0，isExist是100000个0
    for(int i = 0; i < m ; i++)
    {
        scanf("%d", &guest[i]);
        if(couple[guest[i]] != -1)
        isExist[couple[guest[i]]] = 1;
    }//遍历guest，在isExist中标记为1，即已婚
    set<int> s;
    for(int i = 0; i < m; i++)
    {
        if(!isExist[guest[i]])
        s.insert(guest[i]);//再遍历，如果未婚则插入guest中
    }
    printf("%d\n", s.size());
    for(auto it = s.begin(); it != s.end(); it++)
    {
        if(it != s.begin())
        printf(" ");
        printf("%05d", *it);//05意思是不足5位前面补0
    }
    return 0;
}