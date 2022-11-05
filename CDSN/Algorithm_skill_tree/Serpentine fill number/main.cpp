#include<iostream>
using namespace std;

//计算从1累加到x的值
int f(int x){
    return x*(x+1)/2;
}

int main(){
    int n;
    while(1){
    cin>>n; //n行n列
    /*n行n列的数对于三角形所在的行数m是2n-1（奇数行）
    */
    int m=2*n-1;
    //大三角形（n行n列的那个数所在的）最大的数+小三角形（比大三角形少一行的）最大的数加一，两数取平均数
    //要求n行n列的那个数，观察发现等于所在行两头的数的平均
    //右头的等于从1累加到m，左头的等于1加到m-1（是偶数行三角形中最大的数）再加1
    cout<<((f(m)+f(m-1)+1)/2)<<endl;
    }    
    system("pause");
    return 0;
}