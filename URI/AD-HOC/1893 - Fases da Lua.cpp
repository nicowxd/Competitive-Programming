// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Fases da Lua
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1893

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (b >= 0 && b <= 2)
		printf("nova\n");
	else if (b >= 97 && b <= 100)
		printf("cheia\n");
	else if ((b >= 3 && b <= 96) && (a < b)) 
		printf("crescente\n");
	else
		printf("minguante\n");
	return 0;
}

