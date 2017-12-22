// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: A Lenda de Flavious Josephus
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1030

#include <iostream>
#include <cstdio>

using namespace std;

int josephus(int n, int k)
{
	return (n == 1) ? 0 : ((josephus(n-1,k) + k)%n);
}
		
int main()
{

	int x, a, b, caso = 1;
	scanf("%d", &x);
	while(x--)
	{
		scanf("%d %d", &a, &b);
		printf("Case %d: %d\n", caso++, josephus(a,b)+1);
	}
	return 0;
}

