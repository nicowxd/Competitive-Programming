#include <iostream>

using namespace std;

int main()
{
	int n, magic[20][20];
	cin >> n;
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> magic[i][j];
	
	int ans, acc;
	bool flag = false;
		
	for (int i = 0; i < n; i++)
	{
		acc = 0;
		for (int j = 0; j < n; j++)
			acc = acc + magic[i][j];
	
		if (!flag)
		{
			ans = acc;
			flag = true;
		}
		else
		{
			if (ans != acc)
			{
				cout << "-1\n";
				return 0;
			}
		}
	}	
	for (int i = 0; i < n; i++)
	{
		acc = 0;
		for (int j = 0; j < n; j++)
			acc = acc + magic[j][i];
		if (ans != acc)
		{
			cout << "-1\n";
			return 0;
		}
	}
	acc = 0;
	for (int i = 0; i < n; i++)
		acc = acc + magic[i][i];
	
	if (acc != ans)
	{
		cout << "-1\n";	
		return 0;
	}
	acc = 0;

	for (int i = 0, j = n-1; i < n; i++, j--)
		acc = acc + magic[i][j]; 
	
	if (acc != ans)
	{
		cout << "-1\n";
		return 0;
	}
	cout << ans << "\n";
	return 0;
}
	
		
