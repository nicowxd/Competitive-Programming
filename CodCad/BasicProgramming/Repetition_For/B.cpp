#include <iostream>

using namespace std;

int main()
{
	int n, ans = 0, acc = 1, x1, x2;
	cin >> n;
	cin >> x1;
	
	for (int i = 1; i < n; i++)
	{
		cin >> x2;
		if (x2 == x1)
			acc = acc + 1;
		else
			acc = 1;
		ans = max(acc, ans);
		x1 = x2;
	}

	cout << ans << "\n";
	return 0;
}	
