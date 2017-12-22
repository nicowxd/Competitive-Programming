// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Coral Perfeito
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1225

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, notas[10000];
	while(scanf("%d", &n) != EOF)
	{
		int sum=0, ans=1;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &notas[i]);
			sum+=notas[i];
		}
		if (sum % n != 0)	
			printf("-1\n");
		else
		{
			int media = sum/n;
			for (int i = 0; i < n; i++)
			{
				if (notas[i] < media)	
					ans+= media-notas[i];
			}
			printf("%d\n", ans);
		}
	}
	return 0;
}
