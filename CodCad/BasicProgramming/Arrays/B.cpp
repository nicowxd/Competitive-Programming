#include <iostream>

using namespace std;

int main()
{
	int n, mine[100];
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cin >> mine[i];
	
	if (n == 1)
		cout << mine[0] << "\n";
	else
	{
		for (int i = 0; i < n; i++)
		{
			int ans = 0;
			if (mine[i] == 1)
				ans = ans + 1;
			if (i != (n - 1))
				mine[i+1] == 1 ? ans = ans + 1 : ans = ans + 0;
			if (i == (n - 1) or i != 0)
				mine[i-1] == 1 ? ans = ans + 1 : ans = ans + 0;
			cout << ans << "\n";
		}
	}
	return 0;
}		
