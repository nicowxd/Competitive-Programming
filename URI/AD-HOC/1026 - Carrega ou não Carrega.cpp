// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Carrega ou não Carrega?
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1026

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	unsigned int x, y,z;
	while(scanf("%u %u", &x, &y) != EOF)
	{
	z = x^y;
	printf("%u\n", z);
	}
	return 0;
}
