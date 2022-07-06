#include <iostream>
using namespace std;

int ans;

void check(int n)  //二元判断
{
	while(n) //当变量不为0时进行操作
	{
		int t = n % 10;  //这个变量先取余10
		if(t == 2) ans ++; //如果结果等于2，说明是偶数，结果自增1
		n /= 10; //再往前移1位
	}
}           /*小结：需要按位看数字的，第一步都对其进行%10的操作，第二步写if判断条件对结果自增，
第三步进行/10使数字往前移位
*/
int main()
{
	for (int i = 1; i <= 2020; i ++)
		check(i);
	
	cout << ans << endl;
	return 0;		
}