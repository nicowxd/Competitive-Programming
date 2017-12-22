// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Corrida
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2516

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int s, va, vb;
	while(scanf("%d %d %d", &s, &va, &vb) != EOF)
	{
		if (va <= vb)
			printf("impossivel\n");
		else
		{
			double t = (1.0*s)/(va-vb);
			printf("%.2lf\n", t);
		}
	}
	return 0;
}
