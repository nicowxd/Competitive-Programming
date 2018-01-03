#include <bits/stdc++.h>

using namespace std;

long long memo[65][2][400];
vector<int> v;

long long digit (int pos, int tight, long long sum)
{
	if (pos == -1)
		return sum;
	if (memo[pos][tight][sum] != -1)
		return memo[pos][tight][sum];
	
	long long ans = 0LL;
	int n = (tight) ? v[pos] : 1;
	
	for (int i = 0; i <= n; i++)
	{
		int newTight = (v[pos] == i) ? tight : 0;
		ans += digit(pos-1, newTight, sum + i);
	}

	return memo[pos][tight][sum] = ans;
}

long long process (long long num)
{
	v.clear();
	memset(memo, -1, sizeof memo);
	
	while(num)
	{	
		v.emplace_back(num % 2);
		num /= 2;
	}
	
	return digit(v.size() - 1, 1, 0);
}

int main()
{
	long long a, b;
	
	while(scanf("%lld %lld", &a, &b) != EOF)
	{
		printf("%lld\n", process(b) - process(a - 1));
	}

	return 0;
}
