// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Falha do Motor
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2167

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, x0, x1, k = 0;
	scanf("%d", &n);
	cin >> x0;
	for (int i = 1; i < n; i++)
	{
		cin >> x1;
		if (x1 < x0 && k == 0)
			k = i+1;
		x0 = x1;
	}
	printf("%d\n", k);
	return 0;
}
