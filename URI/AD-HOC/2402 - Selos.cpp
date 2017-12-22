// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Selos
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2402

#include <bits/stdc++.h>

using namespace std;

int main()
{

	long long int n;
	scanf("%lld", &n);

	for (long long int i = 2; i <= sqrt(n); i++)
	{
		if (!(n % i))
		{
			printf("S\n");
			return 0;
		}
	}
	printf("N\n");
	return 0;
}
