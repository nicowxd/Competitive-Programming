// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: As Abas de Péricles
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2061

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	string action;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		cin >> action;
		if (action == "clicou")
			n--;
		else
			n++;
	}
	printf("%d\n", n);
	return 0;
}
