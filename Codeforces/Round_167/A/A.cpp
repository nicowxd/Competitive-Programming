#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d", &n);
	
	int acc = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);
		acc+= x;
	}
	
	int ans = 0;
	for (int i = 1; i < 6; i++)
	{
		if ((acc+i) % (n+1) != 1)
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}
