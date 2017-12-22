// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Brasil e Alemanha
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2355

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	while(scanf("%d", &n), n)
	{
		double br = floor(n/90.0);
		double al = ceil((n*7.0)/90);
		printf("Brasil %.0lf x Alemanha %.0lf\n", br, al);
	}
	return 0;
}
