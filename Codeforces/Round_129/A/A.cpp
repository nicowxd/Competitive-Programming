#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, cities[100000], men = 1e9, ans;
	bool stay = false;
	scanf("%d", &n);
	
	if (n == 1)
	{
		printf("1\n");
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		scanf("%d", cities+i);
		if (cities[i] < men)
		{
			men = cities[i];
			ans = i+1;
		}
	}
	
	for (int i = ans; i < n && !stay; i++)
	{
		if (cities[i] == men)
			stay = true;
	}

	if (stay)
		printf("Still Rozdil\n");
	else
		printf("%d\n", ans);
	return 0;
}
