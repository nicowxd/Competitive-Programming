// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Coluna na Matriz
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1182

#include <bits/stdc++.h>

using namespace std;

int main()
{
	double M[12][12], sum = 0;
	int C;
	char op;
	scanf("%d%*c", &C);
	scanf("%c", &op);
	
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			scanf("%lf", &M[i][j]);
			if (j == C)
				sum += M[i][j];
		}
	}
	if (op == 'S')
		printf("%.1lf\n", sum);
	else
		printf("%.1lf\n", sum/12);
	return 0;
}
