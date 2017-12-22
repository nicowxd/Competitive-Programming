// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Raiz Quadrada de 2
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2166

#include <bits/stdc++.h>

using namespace std;

double sqtwo(double ini, double n)
{	
	if (ini == n)
		return 0;
	return (1.0/(2.0 + sqtwo(ini+1, n)));
}

int main()
{

	double n;
	scanf("%lf", &n);

	printf("%.10lf\n", 1.0+sqtwo(0, n));
	return 0;
}
