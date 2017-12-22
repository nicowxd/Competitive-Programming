#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	char v[400][400];
	scanf("%d", &n);
	getchar();

	for (int i = 0; i < n; i++)
		scanf("%s", v[i]);
			
	char r = v[0][1];
	char d = v[0][0];
	string ans = "YES";
	if (r == d)
		ans = "NO";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j or i == n-j-1)
			{
				if (v[i][j] != d)
					ans = "NO";
			}
			else
			{
				if (v[i][j] != r)
					ans = "NO";
			}
		}
	}

	cout << ans << endl;
	return 0;
}
