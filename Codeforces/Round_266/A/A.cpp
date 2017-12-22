#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, a, b, ans;
	scanf("%d %d %d %d", &n, &m, &a, &b);
	ans = min((n/m)*b + (n%m)*a, n*a);
	ans = min(ans, ((n/m)+1)*b);
	printf("%d\n", ans);
	return 0;
}
