#include <iostream>

using namespace std;

int main()
{
	int n, p, x, y, ans = 0;
	cin >> n >> p;
	while(n--)
	{
		cin >> x >> y;
		if (x + y >= p)
			ans = ans + 1;
	}
	
	cout << ans << "\n";
	return 0;
}
