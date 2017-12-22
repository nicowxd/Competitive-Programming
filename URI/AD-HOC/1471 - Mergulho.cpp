// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Mergulho
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1471

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int n, r, vet[100010], t;
	bool flag;
	while(scanf("%d %d", &n, &r) != EOF)
	{
		flag = true;
		memset(vet, 0, sizeof(vet));
		for (int i = 0; i < r; i++)
		{
			scanf("%d", &t);
			vet[t] = 1;
		}
		for (int i = 1; i <= n; i++)
		{
			if (vet[i] == 0)
			{
				printf("%d ", i);
				flag = false;
			}

		}
		if (flag)
			printf("*\n");
		else
			printf("\n");
	}
	return 0;
}



