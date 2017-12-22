// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Marianne e os Primos Gêmeos
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1926

#include <bits/stdc++.h>

using namespace std;

bitset<10000010> bs;
vector<int> primes;   

void sieve(long long upperbound) 
{
  
	  long long _sieve_size = upperbound + 1;
	  bs.set();
	  bs[0] = bs[1] = 0;
	  for (long long i = 2; i <= _sieve_size; i++)
	  {
		if (bs[i]) 
		{
			for (long long j = i * i; j <= _sieve_size; j += i) 
				bs[j] = 0;
			primes.push_back((int)i);
		} 
	  }
}                  

int main()
{


	int q;

	scanf("%d", &q);

	sieve(100010);
	while(q--)
	{

		int x, y;
		scanf("%d %d", &x, &y);
		
		int ans = 0;

		if (x < y)
		{
			for (int i = 1; i < (int) primes.size() and primes[i] <= y; i++)
				if (primes[i] >= x and ((primes[i+1] - primes[i]) == 2 or (primes[i] - primes[i-1]) == 2))
					ans++;
		}
		
		else
		{
			for (int i = 1; i < (int) primes.size() and primes[i] <= x; i++)
				if (primes[i] >= y and ((primes[i+1] - primes[i]) == 2 or (primes[i] - primes[i-1]) == 2))
					ans++;
		}

		printf("%d\n", ans);

	}
	return 0;
}
