// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: TDA Racional
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1022

#include <iostream>
#include <cstdio>

using namespace std;

int gcd (int a, int b)
{
	return b == 0 ? a : gcd(b, a%b);
}

int main()
{
	int n, n1, d1, n2, d2, num, den, mdc;
	char op;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d / %d %c %d / %d", &n1, &d1, &op, &n2, &d2);
		if (op == '+')
		{
			num = n1*d2 + n2*d1;
			den = d1*d2;
		}
		else if (op == '-')
		{
			num = n1*d2 - n2*d1;
			den = d1*d2;
		}
		else if (op == '*')
		{
			num = n1*n2;
			den = d1*d2;
		}
		else
		{
			num = n1*d2;
			den = n2*d1;
		}
		mdc = gcd(num, den);
		if (den/mdc < 0)
			printf("%d/%d = %d/%d\n", num, den, -num/mdc, -den/mdc);
		else
			printf("%d/%d = %d/%d\n", num, den, num/mdc, den/mdc);
	}
	return 0;
}

		
			

