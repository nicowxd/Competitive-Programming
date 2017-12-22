#include <bits/stdc++.h>

using namespace std;

bool cmp (int x, int y)
{
	if (x > y)
		return true;
	return false;
}

int main()
{
	int n, coin[110], sum = 0, ans = 0;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &coin[i]);
		sum+= coin[i];
	}

	sort(coin, coin+n, cmp);
	for (int i = 0; i < n; i++)
	{
		ans+= coin[i];
		if (ans > sum/2)
		{
			printf("%d\n", i+1);
			break;
		}
	}	

	return 0;
}		
