#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, ans;
	scanf("%d", &n);	
	if (n > 0)
		printf("%d\n", n);
	else
	{
		ans = max(n/10, n%10 + (n/100)*10);
		printf("%d\n", ans);
	}
	return 0;
}
