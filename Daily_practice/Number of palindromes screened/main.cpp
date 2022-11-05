#include<iostream>
using namespace std;
int main(){
    int m, n, k;
    for(m = 10;m <= 1000; m++)
    {
        k = m;
        n = 0;
        while(k > 0)
        {
            n = n*10 + (k % 10);
            k = k / 10;
        }//n是m的倒序
        if(m == n)
        {
            cout << m <<endl;
        }
    }
    return 0;
}