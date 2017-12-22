// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Numeração Romana para Núm...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1960

#include <bits/stdc++.h>

using namespace std;

int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	while(n)
	{
		if (n >= 1 && n <= 3)
		{
			printf("I");
			n--;
		}
		else if (n == 4)
		{
			printf("IV");
			n-=4;
		}
		else if (n == 5)
		{
			printf("V");
			n-=5;
		}
		else if (n >= 6 && n <= 8)
		{
			printf("VI");
			n-=6;
		}
		else if (n == 9)
		{
			printf("IX");
			n-=9;
		}
		else if (n >= 10 && n <= 39)
		{
			printf("X");
			n-=10;
		}
		else if (n >= 40 && n <= 49)
		{
			printf("XL");
			n-=40;
		}
		else if (n >= 50 && n <= 89)
		{
			printf("L");
			n-=50;
		}
		else if (n >= 90 && n <= 99)
		{
			printf("XC");
			n-=90;
		}
		else if (n >= 100 && n <= 399)
		{
			printf("C");
			n-=100;
		}
		else if (n >= 400 && n <= 499)
		{
			printf("CD");
			n-=400;
		}
		else if (n >= 500 && n <= 899)
		{
			printf("D");
			n-=500;
		}
		else if (n >= 900 && n <= 999)
		{
			printf("CM");
			n-=900;
		}
		else
		{
			printf("M");
			n-=1000;
		}
	}
	printf("\n");
	return 0;
}

