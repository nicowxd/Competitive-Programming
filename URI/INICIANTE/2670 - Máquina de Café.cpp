// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Máquina de Café
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2670

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a1, a2, a3;

	scanf("%d %d %d", &a1, &a2, &a3);

	int k1 = a2*2 + a3*4;
	int k2 = a1*2 + a3*2;
	int k3 = a1*4 + a2*2;

	if (k1 <= k2 and k1 <= k3)
		printf("%d\n", k1);
	else if (k2 <= k1 and k2 <= k3)
		printf("%d\n", k2);
	else
		printf("%d\n", k3);
	return 0;
}
