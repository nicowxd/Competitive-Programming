// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: A Mensagem de Will
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2523

#include <bits/stdc++.h>

using namespace std;

int main()
{

	char str[28];
	int n;
	
	while(scanf("%s", str) != EOF)
	{
		int l;
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &l);
			printf("%c", str[l-1]);
		}
		printf("\n");
	}

	return 0;
}
