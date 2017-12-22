// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: O Bravo Guerreiro Hashmat
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1198

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	//freopen("in", "r", stdin);
	//freopen("out", "w", stdout);
	unsigned long long int x,y;
	while (scanf("%llu %llu", &x, &y) != EOF)
	{
	if (x > y)
	{
	swap(x,y);
	}
	printf("%llu\n", y-x);
	}
	return 0;
}
