// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Imagem
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1516

#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n, m;
	char des[52][52];
	while(scanf("%d %d", &n, &m), n || m)
	{
		for (int i = 0; i < n; i++)
			scanf("%s", des[i]);
		
		int a, b;
		scanf("%d %d", &a, &b);
		a/=n;
		b/=m;
		for (int i = 0; i < n; i++)
		{
			if (i != 0)
				printf("\n");
			for (int k = 0; k < a; k++)
			{
				if (k != 0)
					printf("\n");
				for (int j = 0; j < m; j++)
					for (int l = 0; l < b; l++)
						printf("%c", des[i][j]);
			}
		}
		printf("\n\n");
	}
	return 0;
}
