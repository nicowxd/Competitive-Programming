#include <bits/stdc++.h>

using namespace std;

const int limite = 1000001;

set<long long> sieve()
{
	static bool arr[limite];
	
	for (int i = 2; i*i < limite; i++)
	{
		if (!arr[i])
		{
			for (int j = i*i; j < limite; j += i)
				arr[j] = true;
		}
	}

	set<long long> insere;
	for (int i = 2; i < limite; i++)
	{
		if (!arr[i])
			insere.insert((long long)i * i);
	}
	
	return insere;
}
			

int main()
{
	
	set<long long> primes(sieve());
	
	int n;
	long long x;
	
	scanf("%d", &n);	
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (primes.find(x) != primes.end())
			printf("YES\n");
		else
			printf("NO\n");
	}	
	return 0;
}
