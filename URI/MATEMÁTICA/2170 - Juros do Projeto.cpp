// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Juros do Projeto
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2170

#include <bits/stdc++.h>

using namespace std;

int main()
{

	double x, y; 
	int caso = 1;
	while(scanf("%lf %lf", &x, &y) != EOF)
		printf("Projeto %d:\nPercentual dos juros da aplicacao: %.2lf %%\n\n", caso++, ((y-x)*100.0)/x);

	return 0;
}
