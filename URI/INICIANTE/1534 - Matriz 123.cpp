// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Matriz 123
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1534

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	//freopen("in", "r", stdin);
	//freopen("out", "w", stdout);
	int n,p,u;
	while(scanf("%d", &n) != EOF)
	{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
		p = i;
		u = n-1-i;
		if (j == p && p != u)
		{
		printf("1");
		}
		else if (j == u)
		{
		printf("2");
		}
		else
		{
		printf("3");
		}
		}
	printf("\n");
	}
	}
	return 0;
}
			
