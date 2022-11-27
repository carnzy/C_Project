#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    string s = to_string(a*b);
    reverse(s.begin(),s.end());
    cout<<stoi(s)<<endl;//将n进制字符串转10进制
    return 0;
}