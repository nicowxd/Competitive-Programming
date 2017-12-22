// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Tipo de Combustível
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1134

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int alc = 0, gas = 0, dies = 0, n;
	while(scanf("%d", &n) && n != 4)
	{
		if (n < 1 || n > 4)
			continue;
		if (n == 1)
			alc++;
		else if (n == 2)
			gas++;
		else 
			dies++;
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alc);
	printf("Gasolina: %d\n", gas);
	printf("Diesel: %d\n", dies);
	return 0;
}
