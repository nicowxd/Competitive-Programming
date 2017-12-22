// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Formiguinha
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1612

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int n;
	double x,y;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
	scanf("%lf", &x);
	y = ceil(x/2);
	printf("%.0lf\n", y);
	}
	return 0;
}
	
	
