#include <bits/stdc++.h>

using namespace std;

long long int mdc(long long int a, long long int b)
{
	return (b == 0 ? a : mdc(b, a%b));
}

long long int mmc(long long int a, long long int b)
{
	return (a*b)/(mdc(a,b));
}

int main()
{

	long long int a, b, ans;
	scanf("%lld %lld", &a, &b);
	
	ans = mmc(a, b);
	printf("%lld\n", ans);
	return 0;
}
