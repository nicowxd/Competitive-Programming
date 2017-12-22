// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Feynman
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1323

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	while(scanf("%d", &n), n)
	{
		int sum = 0;
		for (int i = 1; i <= n; i++)
			sum+= i*i;
		printf("%d\n", sum);
	}
	return 0;
}
