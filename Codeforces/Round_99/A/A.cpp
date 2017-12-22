#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, days[8];	
	scanf("%d", &n);
	
	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &days[i]);
	}
	
	int ans = 0;
	while(n > 0)
	{
		n-=days[ans];
		ans++;
		ans %= 7;
	}
	if (ans == 0)
		printf("7\n");
	else
		printf("%d\n", ans);
	return 0;
}
