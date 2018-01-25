#include <bits/stdc++.h>

using namespace std;

vector<int> v;
long long memo[11][2][200];

long long digit (int idx, int tight, int sum, int last)
{
	if (idx == -1)
	{
		if (last&1)
			return sum;
		else
			return 0;
	}

	if (memo[idx][tight][sum] != -1)
		return memo[idx][tight][sum];
	
	long long ans = 0;
	int stop = tight ? v[idx] : 9;

	for (int i = 0; i <= stop; i++)
	{	
		int newTight = (i == v[idx]) ? tight : 0;

		ans += digit(idx-1, newTight, sum + i, i);
	}

	return memo[idx][tight][sum] = ans;
}

long long process (int x)
{
	v.clear();
	memset(memo, -1, sizeof memo);

	while(x)
	{
		v.emplace_back(x % 10);
		x /= 10;
	}

	return digit(v.size() - 1, 1, 0, 0);
}

int main()
{

	int x, y;
	
	while(scanf("%d %d", &x, &y) != EOF)
		printf("%lld\n", process(max(x, y)) - process(min(x,y)-1));
	
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
