#include <iostream>

using namespace std;

int main()
{
	int n, acc = 0, i = 1, a, ans;
	bool flag = false;
	cin >> n;
	
	while(i <= n)
	{
		cin >> a;
		acc = acc + a;
		if (acc >= 1000000 and !flag)
		{
			flag = true;
			ans = i;
		}
		i = i + 1;
	}
	cout << ans << "\n";
	return 0;
}	
