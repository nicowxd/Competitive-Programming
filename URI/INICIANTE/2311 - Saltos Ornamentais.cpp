// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Saltos Ornamentais
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2311

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	char nome[100];
	scanf("%d", &n);
	while(n--)
	{
		double gd, notas,acc = 0, maior = 0, menor = 1e9;
		scanf("%s", nome);
		scanf("%lf", &gd);
		for (int i = 0; i < 7; i++)
		{		
			scanf("%lf", &notas);
			acc += notas;
			if (notas > maior)
				maior = notas;
			if (notas < menor)
				menor = notas;
		}
		acc -= maior;
		acc -= menor;
		printf("%s %.2lf\n", nome, acc*gd);
	}
	return 0;
}
