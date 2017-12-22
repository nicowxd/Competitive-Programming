// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Contando Ciclos
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2497

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, c = 1;
	
	while(scanf("%d", &n) && n != -1)
	{
		printf("Experiment %d: %d full cycle(s)\n", c++, n/2);
	}

	return 0;
}
