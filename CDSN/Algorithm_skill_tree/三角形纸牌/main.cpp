#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[9] = {1,2,3,4,5,6,7,8,9};
    int res = 0;
    do
    {
        int x1 = a[0]+a[1]+a[2]+a[3];
        int x2 = a[3]+a[4]+a[5]+a[6];
        int x3 = a[6]+a[7]+a[8]+a[0];
        if(x1==x2 && x2 == x3){
            res++;
        }
    }while (next_permutation(a,a+9));
    //next_permutation()会取得[first,last)所标示之序列的下一个排列组合
    //如果没有下一个排列组合，便返回false;否则返回true
    cout<<res/3/2<<endl;
    return 0;
}

	