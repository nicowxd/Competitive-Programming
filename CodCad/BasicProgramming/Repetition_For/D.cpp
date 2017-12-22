#include <iostream>

using namespace std;

int main()
{
	int val, ans = 0;
	for (;;)
	{
		cin >> val;
		if (val == 0)
			break;
		ans = max(ans, val);
	}
	cout << ans << "\n";
	return 0;
}
