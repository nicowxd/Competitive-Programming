// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Fatorial de Novo!
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1429

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x, ans, fatorial[6] = {1, 2, 6, 24, 120, 720};
	while(scanf("%d", &x), x)
	{
		int tmp = x;
		ans = 0;
		int i = 0;
		while(tmp)
		{
			ans += tmp%10*fatorial[i];
			tmp/=10;
			i++;
		}
		printf("%d\n", ans);
	}
	return 0;
}
