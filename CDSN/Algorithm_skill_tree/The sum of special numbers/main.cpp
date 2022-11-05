#include <iostream>
using namespace std;

bool check(int x)
{
	while(x)
	{
		int t = x % 10;
		if(t == 2 || t == 0 || t == 1 || t == 9) return true;
		x /= 10;
	}
	return false;
}

int main()
{
	int n;
	cin >> n;
	
	int ans = 0;
	for (int i = 1; i <= n; i ++)
		if(check(i))
			ans += i;
		
	cout << ans << endl;
	return 0;		
} 