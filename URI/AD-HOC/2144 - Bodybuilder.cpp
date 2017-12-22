// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Bodybuilder
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2144

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int w1, w2, r, k = 0;
	double ms = 0.0;
	while(scanf("%d %d %d", &w1, &w2, &r), w1 || w2 || r)
	{
		k++;
		double x1 = w1*(1+(r/30.0));
		double x2 = w2*(1+(r/30.0));
		int m = (x1+x2)/2;
		ms += m;
		if (m < 13 && m >= 1)
			printf("Nao vai da nao\n");
		else if (m < 14 && m >= 13)
			printf("E 13\n");
		else if (m < 40 && m >= 14)
			printf("Bora, hora do show! BIIR!\n");
		else if (m <= 60 && m >= 40)
			printf("Ta saindo da jaula o monstro!\n");
		else
			printf("AQUI E BODYBUILDER!!\n");
		
	}
	if (ms/k > 40.0)
		printf("\nAqui nois constroi fibra rapaz! Nao e agua com musculo!\n");
	return 0;
}
