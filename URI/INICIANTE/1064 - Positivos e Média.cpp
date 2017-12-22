// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Positivos e Média
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1064

#include <bits/stdc++.h>

using namespace std;

int main()
{
	double x, avg = 0;
	int pos = 0;
	for (int i = 0; i < 6; i++)
	{
		scanf("%lf", &x);
		if (x > 0)
		{
			pos++;
			avg+= x;
		}
	}
	printf("%d valores positivos\n", pos);
	printf("%.1lf\n", avg/(double)pos);
	return 0;
}
