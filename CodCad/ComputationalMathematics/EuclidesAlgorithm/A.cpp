#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b)
{
	return (b == 0 ? a : mdc(b, a%b));
}

int main()
{

	int n;
	scanf("%d", &n);
	
	int a, b, ans;
	scanf("%d %d", &a, &b);
	
	ans = mdc(a, b);
	for (int i = 2; i < n; i++)
	{
		scanf("%d", &a);
		ans = mdc(a, ans);
	}
	printf("%d\n", ans);
	return 0;
}
