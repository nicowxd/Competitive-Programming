#include <iostream>

using namespace std;

int main()
{
	int n, l, c, ans = 0;	
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> l >> c;
		if (l > c)
			ans = ans + c;
	}
	
	cout << ans << "\n";
	return 0;
}
