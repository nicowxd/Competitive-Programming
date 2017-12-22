// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Fibonacci Rápido
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2164

#include <bits/stdc++.h>

using namespace std;

double fib (int x)
{
	double k = ((pow((1+sqrt(5))/2, x)) - (pow((1-sqrt(5))/2, x)))/sqrt(5);
	return k;
}

int main()
{

	int n;
	scanf("%d", &n);
	printf("%.1lf\n", fib(n));
	return 0;
}
