// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Máquina de Verificação Au...
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1743

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x[5], k;
	for (int i = 0; i < 5; i++)
		scanf("%d", &x[i]);
	bool check = true;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &k);
		if (k == x[i])
			check = false;
	}

	if (check)
		printf("Y\n");
	else
		printf("N\n");
	return 0;
}	
