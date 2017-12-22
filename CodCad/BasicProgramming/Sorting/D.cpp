#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, x[3];
	cin >> n;
	
	for (int i = 0; i < 3; i++)
		cin >> x[i];
	sort(x, x+3);
	
	int ans = 0;
	for (int i = 0; i < 3; i++)
	{
		if (n >= x[i])
		{
			n = n - x[i];
			ans = ans + 1;
		}
	}
	
	cout << ans << "\n";
	return 0;
}
