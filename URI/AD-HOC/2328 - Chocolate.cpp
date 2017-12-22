// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Chocolate
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2328

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, ans = 0;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);
		ans += x-1;
	}

	printf("%d\n", ans);
	return 0;
}
