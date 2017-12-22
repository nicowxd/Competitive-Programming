#include <bits/stdc++.h>

using namespace std;

int main()
{

	long long int x, ans;
	scanf("%lld", &x);

	ans = __builtin_popcountll(x);
	printf("%lld\n", ans);
	return 0;
}
