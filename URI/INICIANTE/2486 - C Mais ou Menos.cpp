// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: C Mais ou Menos?
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2486

#include <bits/stdc++.h>

using namespace std;

int idx(char *fruta)
{
	if (!(strcmp(fruta, "suco de laranja")))
		return 120;
	else if (!(strcmp(fruta, "morango fresco")))
		return 85;
	else if (!(strcmp(fruta, "mamao")))
		return 85;
	else if (!(strcmp(fruta, "goiaba vermelha")))
		return 70;
	else if (!(strcmp(fruta, "manga")))
		return 56;
	else if (!(strcmp(fruta, "laranja")))
		return 50;
	else
		return 34;
}

int main()
{

	int n;
	
	while(scanf("%d", &n), n)
	{
		int t, ans = 0;
		char fruta[20];
		for (int i = 0; i < n; i++)
		{
			scanf("%d%*c", &t);
			gets(fruta);
			ans += t * idx(fruta);
		}
		
		if (ans > 130)
			printf("Menos %d mg\n", ans - 130);
		else if (ans < 110)
			printf("Mais %d mg\n", 110 - ans);
		else
			printf("%d mg\n", ans);		
	}
		
	return 0;
}
