// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Acima da Média
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1214

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int c, vet[1010];
	scanf("%d", &c);
	while(c--)
	{
		int n, ans = 0;
		double sum = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", vet+i);
			sum+= vet[i];
		}
		double avg = sum/n;
		for (int i = 0; i < n; i++)
		{
			if (vet[i] > avg)
				ans++;
		}
		printf("%.3lf%\n", (ans*100.0)/n);
	}
	return 0;
}
