#include <bits/stdc++.h>

using namespace std;

long long memo[20][2][200];

long long digit (vector<int> &x, int pos, int tight, long long sum)
{
	if (pos == -1)
		return sum;
	if (memo[pos][tight][sum] != -1)
		return memo[pos][tight][sum];

	long long ans = 0;
	int ac = (tight) ? x[pos] : 9;

	for (int i = 0; i <= ac; i++)
	{
		int newTight = (x[pos] == i) ? tight : 0;

		ans += digit(x, pos-1, newTight, sum+i);
	}
	
	return memo[pos][tight][sum] = ans;
}

long long process (int number)
{
	vector<int> v;
	
	memset(memo, -1, sizeof memo);
	
	while(number)
	{
		v.emplace_back(number%10);
		number/=10;
	}
	
	return digit(v, v.size()-1, 1, 0);
}

int main()
{

	int a, b;
	while(scanf("%d %d", &a, &b))
	{
		if (a == -1 and b == -1)
			break;
		
		printf("%lld\n", process(b) - process(a-1));
	}
	
	return 0;
}
