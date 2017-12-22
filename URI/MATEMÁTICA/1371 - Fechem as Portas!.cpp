// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Fechem as Portas!
// Nível: 6
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1371

#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n;
	
	while(scanf("%d", &n) && n)
	{

		printf("1");

		for (int i = 2; i*i <= n; i++)
			printf(" %d", i*i);
		
		printf("\n");
	}

	return 0;
}
