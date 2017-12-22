#include <iostream>

using namespace std;

int main()
{	
	int n, ans = 1e9, val;	
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> val;
		ans = min(ans, val);
	}
	
	cout << ans << "\n";
	return 0;
}
