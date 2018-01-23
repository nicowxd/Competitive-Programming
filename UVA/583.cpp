#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef long long ll;

bitset<100010> bs;
vi primes;

void crivo (ll n)
{
	bs.set();
	bs[0] = 0; bs[1] = 0;

	for (ll i = 2; i <= n; i++)
	{
		if (bs[i])
		{
			for (ll j = 2; j * i <= n; j++)
				bs[j] = 0;
		}
		primes.push_back(i);
	}
}

vi primeFactors (int n)
{
	vi factors;
        ll PF_idx = 0, PF = primes[PF_idx];
	
	while (PF * PF <= n)
	{
		while (n % PF == 0)
		{
			factors.push_back(PF);
			n /= PF;
		}
		PF = primes[++PF_idx];
	}

	if (n != 1)
		factors.push_back(n);
	return factors;
}
		
		

int main()
{
	
	crivo(100000);
	int n;
	vi ans;
	
	while(scanf("%d", &n), n)
	{	
		ans.clear();

		if (n < 0)
		{
			ans = primeFactors(-n);
			printf("%d = -1", n);

			for (int i = 0; i < (int) ans.size(); i++)
				printf(" x %d", ans[i]);
		}

		else
		{
			ans = primeFactors(n);
			printf("%d = %d", n, ans[0]);	

			for (int i = 1; i < (int) ans.size(); i++)
				printf(" x %d", ans[i]);
		}
		
		printf("\n");
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
