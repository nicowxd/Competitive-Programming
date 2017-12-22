#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll oracle(ll n, ll k)
{
	ll ans = n;

	for (ll i = k; (n-i) >= 1LL; i+=k)
		ans *= (n-i);
	
	return ans;
}


int main()
{

	int n;
	scanf("%d%*c", &n);

	while(n--)
	{
		ll num = 0, exc = 0;
		string x;
		cin >> x;
		
		for (int i = 0; i < (int) x.size(); i++)
		{
			if (isdigit(x[i]))
				num++;
			else
				exc++;
		}

		ll k = 0;
		for (ll i = 0; i < num; i++)
			k += (x[i] - '0') * (pow(10, num-i-1));
		
		printf("%lld\n", oracle(k, exc));
	}
	return 0;
}
