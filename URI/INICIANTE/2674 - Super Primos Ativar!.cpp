// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Super Primos: Ativar!
// Nível: 2
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2674

#include <bits/stdc++.h>

using namespace std;

int main()
{

	
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		bool isPrime = true;

		if (n == 1)
			isPrime = false;
		
		for (int i = 2; (i * i) <= n and isPrime; i++)
			if (n % i == 0)
				isPrime = false;

		if (isPrime)
		{
			bool allPrime = true;

			while(n and allPrime)
			{
				int tmp = n % 10;
				n /= 10;
				
				if (tmp == 1 or tmp == 0)
					allPrime = false;

				for (int i = 2; (i * i) <= tmp and allPrime; i++)
					if (tmp % i == 0)
						allPrime = false;
			}
				
			if (allPrime)
				puts("Super");
			else
				puts("Primo");
		}
		else
			puts("Nada");
	}

	return 0;
}
