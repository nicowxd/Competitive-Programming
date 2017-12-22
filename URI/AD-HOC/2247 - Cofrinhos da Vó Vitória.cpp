// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Cofrinhos da Vó Vitória
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2247

#include <bits/stdc++.h>

using namespace std;

int main()
{


	int n, j, z, caso = 1;
	
	while(scanf("%d", &n), n)
	{
		int leftJ = 0, left = 0;

		printf("Teste %d\n", caso++);

		for (int i = 0; i < n; i++)
		{
			scanf("%d %d", &j, &z);
			if (j > z)
				left += (j - z);
			else
				left -= (z - j);
			printf("%d\n", left);
		}
		printf("\n");
	}
	
	return 0;
}
