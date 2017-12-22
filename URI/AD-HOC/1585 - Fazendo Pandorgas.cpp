// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Fazendo Pandorgas
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1585

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int N,area;
	scanf("%d", &N);
	for (int i=0; i < N; i++)
	{
	int x,y;
	scanf("%d %d", &x, &y);
	area = (x*y)/2;
	printf("%d cm2\n", area);
	}
	return 0;
}
