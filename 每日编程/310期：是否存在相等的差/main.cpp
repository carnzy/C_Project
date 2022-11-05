#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n=8, t, a[10] = {1};
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> t;
        a[abs(t - i)]++;
    }
    for(int i = 8; i >= 0; i--)
        if(a[i] >= 2)
            cout << i << " " << a[i] << endl;
    return 0;
}