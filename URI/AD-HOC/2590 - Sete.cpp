// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sete
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2590

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, ans[4] = {7,9,3,1};
	while(scanf("%d", &n) != EOF)
	{
		while(n--)
		{
			int x;
			scanf("%d", &x);
			x--;
			printf("%d\n", ans[x%4]);
		}
	}
	return 0;
}
