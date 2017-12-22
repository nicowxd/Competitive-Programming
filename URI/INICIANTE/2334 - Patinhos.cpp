// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Patinhos
// Nível: 2
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2334

#include <bits/stdc++.h>

using namespace std;

int main()
{

	long long unsigned int x; 
	while(scanf("%llu", &x))
	{
		if (x == -1)
			break;
		else if (x == 0)
			printf("0\n");
		else
			printf("%llu\n", x-1);
	}
	return 0;
}
