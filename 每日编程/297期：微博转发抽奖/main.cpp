#include<iostream>
#include<string.h>
#include<map>
using namespace std;
int main(){
    int m, n, s;
    cout << "转发总量、中奖间隔、第一个：";
    scanf("%d%d%d", &m, &n, &s);
    string str;
    map<string, int> mapp;
    bool flag = false;
    for(int i = 1; i <= m; i++){
        cin >> str;
        if(mapp[str] == 1){
            s = s + 1;
        }
        if(i == s && mapp[str] == 0){
            mapp[str] = 1;
            cout << "中奖的是：" << str << endl;
            flag = true;
            s = s + n;
        }
    }
    if(flag == false){
        cout << "Keep going...";
    }
    return 0;
}