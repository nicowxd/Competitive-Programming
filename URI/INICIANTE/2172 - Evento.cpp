// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Evento
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2172

#include <bits/stdc++.h>

using namespace std;

int main()
{

	long long int x, m;
	
	while(scanf("%lld %lld", &x, &m), (x && m))
	{	
		printf("%lld\n", x*m);
	}

	return 0;
}
