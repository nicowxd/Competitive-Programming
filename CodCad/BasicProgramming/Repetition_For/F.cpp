#include <iostream>

using namespace std;

int main()
{
	int n, val1, val2, ans = 0;
	cin >> n;
	cin >> val1;
	
	for (int i = 1; i < n; i++)
	{
		cin >> val2;
		if (val2 - val1 <= 10)
			ans = ans + (val2 - val1);
		else
			ans = ans + 10;
		val1 = val2;
	}
	
	cout << ans + 10 << "\n";
	return 0;
}
