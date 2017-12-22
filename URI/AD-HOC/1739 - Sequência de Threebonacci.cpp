// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sequência de Threebonacci
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1739

#include <bits/stdc++.h>

using namespace std;

bool isThree(long long int x)
{
	bool hasThree = false, multThree = false;
	if (x % 3 == 0)
		multThree = true;
	while(x)
	{
		if (x % 10 == 3)
			hasThree = true;
		x/=10;
	}
	return (hasThree or multThree);
}

int main()
{
	
	long long int n, fib[123456], thr[61];

	fib[0] = fib[1] = 1;

	int k = 0;
	for (int i = 2; k <= 60; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];

		if (isThree(fib[i]))
			thr[k++] = fib[i];
	}
	while(scanf("%lld", &n) != EOF)
	{
		printf("%lld\n", thr[n-1]);
	}

	return 0;
}
