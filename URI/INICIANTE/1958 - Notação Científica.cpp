// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Notação Científica
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1958

#include <bits/stdc++.h>

using namespace std;

int main()
{
	double x;
	scanf("%lf", &x);
	if (x >= 0)
		printf("%+.4E\n", x);
	else
		printf("%.4E\n", x);
	return 0;
}
