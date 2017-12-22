// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Identificando o Chá
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2006

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x, y, ans = 0;
	scanf("%d", &x);
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &y);
		if (x == y)
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}

