// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Divisores I
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1157

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;	
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			printf("%d\n", i);
	}
	return 0;
}
