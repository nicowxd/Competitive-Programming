// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Ações
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2568

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int d, i, x, f;
	scanf("%d %d %d %d", &d, &i, &x, &f);
	
	if (!(f%2))
		printf("%d\n", i);
	else
	{
		if (!(d%2))
			printf("%d\n", i-x);
		else
			printf("%d\n", i+x);
	}

	return 0;
}
