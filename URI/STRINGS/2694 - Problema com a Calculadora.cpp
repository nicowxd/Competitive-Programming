// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Problema com a Calculadora
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2694

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	char t[15];
	
	scanf("%d", &n);

	while(n--)
	{
		int x1 = 0, x2 = 0, x3 = 0;
		
		scanf("%s", t);
		
		for (int i = 0; i < 13; i++)
		{
			if (i == 2)
				x1 += (t[i] - '0')*10;
			if (i == 3)
				x1 += (t[i] - '0');
			if (i == 5)
				x2 += (t[i] - '0')*100;
			if (i == 6)
				x2 += (t[i] - '0')*10;
			if (i == 7)
				x2 += (t[i] - '0');
			if (i == 11)
				x3 += (t[i] - '0')*10;
			if (i == 12)
				x3 += (t[i] - '0');
		}

		printf("%d\n", x1+x2+x3);
	}

	return 0;
}
