// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Trilhos Novamente... Traç...
// Nível: 4
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1063

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	char a[1000], b[1000];

	while(scanf("%d", &n) && n)
	{
		char c;
		stack<char> vagao;

		for (int i = 0; i < n; i++)
			scanf(" %c", &a[i]);
		
		for (int i = 0; i < n; i++)
			scanf(" %c", &b[i]);
		a[n] = b[n] = '\0';

		int i = 0, j = 0;

		while(1)
		{
			if (!vagao.empty() and j < n and vagao.top() == b[j])
			{
				vagao.pop();
				printf("R");
				j++;
			}
			else if (i < n)
			{
				vagao.push(a[i]);
				printf("I");
				i++;
			}
			else
				break;
		}
		
		if (!vagao.empty())
			printf(" Impossible");
		printf("\n");

		while(!vagao.empty())
			vagao.pop();
	}

	return 0;
}
