// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Árvore de Natal
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1768

#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n;
	while(scanf("%d", &n) != EOF)
	{
		
		int s = (n+1)/2;
		
		for (int i = 0; i < s; i++)
		{
			for (int j = 0; j < s-(i+1); j++)
				printf(" ");
			for (int j = 0; j < (2*i)+1; j++)
				printf("*");
			printf("\n");
		}
		
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < s-(i+1); j++)
				printf(" ");
			for (int j = 0; j < (2*i)+1; j++)
				printf("*");
			printf("\n");
		}

		printf("\n");
	}	

	return 0;
}
