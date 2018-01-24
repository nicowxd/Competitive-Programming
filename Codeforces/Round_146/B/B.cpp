#include <bits/stdc++.h>

using namespace std;

#define MOD 1073741824

vector<int> primes;
bitset<10010> bs;

int memo[1000010];

void crivo (int n)
{
	bs.set();
	bs[0] = 0; bs[1] = 0;

	for (int i = 2; i * i <= n; i++)
	{
		if (bs[i])
		{
			for (int j = 2; j * i <= n; j++)
				bs[j] = 0;
		}
		primes.push_back(i);
	}
}

int numDiv (int n)
{
	int ans = 1, idx = 0, PF = primes[idx];
	
	while(PF * PF <= n)
	{
		int power = 0;
		while(n % PF == 0)
		{
			power++;
			n /= PF;
		}
		ans *= (power + 1);
		PF = primes[++idx];
	}

	if (n != 1)
		ans *= 2;
	return ans;
}

int main()
{
	memset(memo, -1, sizeof memo);
	crivo(10000);
	
	int a, b, c, sum = 0;
	scanf("%d %d %d", &a, &b, &c);

	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			for (int k = 1; k <= c; k++)
			{
				if (memo[i*j*k] == -1)
					memo[i*j*k] = numDiv(i*j*k);
				sum += memo[i*j*k];
			}

			sum %= MOD;
		}
	}

	cout << sum << endl;
	return 0;
}
