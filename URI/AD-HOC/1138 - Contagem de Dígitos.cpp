#include <bits/stdc++.h>

using namespace std;

int num;
long long memo[20][2][200]; 
long long memo2[20][2][200][2];
vector<int> v;

long long digitRest(int idx, int tight, long long sum)
{
	if (idx == -1)
		return sum;
	if (memo[idx][tight][sum] != -1)
		return memo[idx][tight][sum];
	
	long long ans = 0LL;
	int stop = tight ? v[idx] : 9;

	for (int i = 0; i <= stop; i++) 
	{
		int newTight = (i == v[idx]) ? tight : 0;
		
		if (i == num)
			ans += digitRest(idx-1, newTight, sum+1);
		else
			ans += digitRest(idx-1, newTight, sum);
	}

	return memo[idx][tight][sum] = ans;
}

long long digitZero (int idx, int tight, long long sum, int dont)
{
	if (idx == -1)
		return sum;
	if (memo2[idx][tight][sum][dont] != -1)
		return memo2[idx][tight][sum][dont];
	
	long long ans = 0LL;
	int stop = tight ? v[idx] : 9;
	
	for (int i = 0; i <= stop; i++)
	{
		int newTight = (i == v[idx]) ? tight : 0;
		
		if (i == 0)
			ans += digitZero(idx-1, newTight, sum + (1 && dont), dont);
		else
			ans += digitZero(idx-1, newTight, sum, 1);
	}

	return memo2[idx][tight][sum][dont] = ans;
}

long long process (long long x)
{
	v.clear();

	while(x) 
	{
		v.push_back(x%10);
		x /= 10;
	}
	
	if (num == 0)
	{
		memset(memo2, -1, sizeof memo2);
		return digitZero(v.size() - 1, 1, 0, 0);
	}
	else	
	{
		memset(memo, -1, sizeof memo);
		return digitRest(v.size() - 1, 1, 0);
	}

}

int main()
{

	long long a, b;
	while(scanf("%lld %lld", &a, &b), (a or b))
	{
		num = 0;
		printf("%lld", process(b) - process(a-1));
		for (num = 1; num < 10; num++)
			printf(" %lld", process(b) - process(a-1));
		printf("\n");
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
