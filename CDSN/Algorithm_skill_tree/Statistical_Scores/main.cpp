#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int a = 0, b = 0;
    for (int i = 0; i < n; i ++)
    {
        int x;
        cin >> x;
        if(x >= 60) a ++;
        if(x >= 85) b ++;
    }
    
    cout << round(100.0 * a / n) << '%' << endl;
    cout << round(100.0 * b / n) << '%' << endl;
    return 0;
}
//对于小数而言，round()函数仅仅保留到整数位，即仅仅对小数点后一位四舍五入，
//如果想要保留小数位数，则可以先乘后除
//round(x*100)/100);这是保留小数点后两位

	
