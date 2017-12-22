#include <iostream>

using namespace std;

int main()
{
	int n, ans = 0;
	cin >> n;
	
	string x, y;
	cin >> x >> y;
	
	for (int i = 0; i < n; i++)
	{
		 if (x[i] == y[i])
			ans = ans + 1;
	}
	
	cout << ans << "\n";
	return 0;
}
