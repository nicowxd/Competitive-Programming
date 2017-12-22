// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Colocando Radares
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2598

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int c;
	scanf("%d", &c);
	
	while(c--)
	{
		int n, m;
		scanf("%d %d", &n, &m);
		
		if (!(n % m))
			printf("%d\n", n/m);
		else
			printf("%d\n", (n/m)+1);
	}
	return 0;
}
