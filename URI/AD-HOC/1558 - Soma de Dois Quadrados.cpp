// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Soma de Dois Quadrados
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1558

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		bool achou = false;
		for (int i = 0; i <= 100 and !achou; i++)
		{
			for (int j = 0; j <= 100 and !achou; j++)
			{
				if (i*i + j*j == n)
					achou = true;
			}
		}
		if (achou)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
