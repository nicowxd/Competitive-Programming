// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sequência do Tio Phill Bo...
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2149

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	long long int fib[20];
	fib[1] = 0LL;
	fib[2] = 1LL;
	while(scanf("%d", &n) != EOF)
	{
		for (int i = 3; i <= n; i++)
		{
			if (i & 1)
				fib[i] = fib[i-1] + fib[i-2];
			else
				fib[i] = fib[i-1] * fib[i-2];
		}

		printf("%lld\n", fib[n]);
	}
	return 0;
}
