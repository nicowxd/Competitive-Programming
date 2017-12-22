// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Flíper
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2454

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int p, r;
	scanf("%d %d", &p, &r);
		
	if (p == 0)
		printf("C\n");
	else
	{
		if (r == 0)
			printf("B\n");
		else
			printf("A\n");
	}
	return 0;
}
