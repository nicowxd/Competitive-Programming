#include <bits/stdc++.h>

using namespace std;

int main()
{

	bool dang = false;
	string x;
	cin >> x;

	char ac = x[0];
	int ans = 1;

	for (int i = 1; i < (int) x.size(); i++)
	{
		if (x[i] == ac)
			ans++;
		else
		{
			ans = 1;
			ac = x[i];
		}
		if (ans >= 7)
			dang = true;
	}
	
	if (dang)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
