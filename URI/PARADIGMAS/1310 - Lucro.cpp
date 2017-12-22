// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Lucro
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1310

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;	
	while(scanf("%d", &n) != EOF)
	{
		int custo, sum = 0, ans = 0, receita;
		scanf("%d", &custo);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &receita);
			sum += receita-custo;
			if (sum < 0)
				sum = 0;
			ans = max(ans, sum);
		}
		printf("%d\n", ans);
	}
	return 0;
}
