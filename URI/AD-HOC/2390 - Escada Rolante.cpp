// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Escada Rolante
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2390

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, ini, x, ans = 0;
	scanf("%d", &n);
	scanf("%d", &ini);
	n--;
	while(n--)
	{
		scanf("%d", &x);
		if (x - ini < 10)
			ans += x - ini;
		else
			ans += 10;
		
		ini = x;
	}
	ans += 10;
	printf("%d\n", ans);
	return 0;
}
