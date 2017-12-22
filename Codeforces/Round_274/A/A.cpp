#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c, ans;
	scanf("%d%d%d", &a, &b, &c);
	ans = a+b+c;
	ans = max(ans, a+b*c);
	ans = max(ans, a*(b+c));
	ans = max(ans, a*b*c);
	ans = max(ans, (a+b)*c);
	printf("%d\n", ans);
	return 0;
}
