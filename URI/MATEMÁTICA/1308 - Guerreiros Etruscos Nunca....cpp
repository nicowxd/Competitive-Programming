// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Guerreiros Etruscos Nunca...
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1308

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d", &n);

	while(n--)
	{
		long long x;
		
		scanf("%lld", &x);

		long long delta = (long long)sqrt((1 + 4*2*x));
		printf("%lld\n", (-1 + delta)/2);
	}

	return 0;
}
