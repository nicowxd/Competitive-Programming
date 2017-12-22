// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Escolha Difícil
// Nível: 5
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2702

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int ans = 0, v[3], x;

	for (int i = 0; i < 3; i++)
		scanf("%d", v+i);
	
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &x);
		if (x > v[i])
			ans += (x - v[i]);
	}

	printf("%d\n", ans);

	return 0;
}
