// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Trapézios de Natal
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1765

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int t, qt;
	double a, b, result;
	while(scanf("%d", &t) && t)
	{
		for (int i = 0; i < t; i++)
		{
			printf("Size #%d:\n", i+1);
			scanf("%d %lf %lf", &qt, &a, &b);
			result = qt * ((a+b)*5.0)/2.0;
			printf("Ice Cream Used: %.2lf cm2\n", result);
		}
		printf("\n");
	}
	return 0;
}



