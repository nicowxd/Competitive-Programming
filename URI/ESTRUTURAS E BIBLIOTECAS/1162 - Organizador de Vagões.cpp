// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Organizador de Vagões
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1162

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	map<int, int> ordem;
	scanf("%d", &n);
	while(n--)
	{
		int l, x, ans = 0;
		ordem.clear();
		scanf("%d", &l);
		for (int i = 1; i <= l; i++)
		{
			scanf("%d", &x);
			ordem[x] = i;
		}
				
		for (int i = 1; i <= l; i++)
		{
			if (ordem[i] != i)
			{
				for (int j = i; j <= l; j++)
				{
					if (ordem[j] < ordem[i])
					{
						ans++;
						ordem[j]++;
					}
				}
				ordem[i] = i;
			}
		}			
		printf("Optimal train swapping takes %d swaps.\n", ans);
	}
	return 0;
}
