// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Desafio de Bino
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2060

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, val, m2 = 0, m3 = 0, m4 = 0, m5 = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &val);
		if (!(val % 2))
			m2++;
		if (!(val % 3))
			m3++;
		if (!(val % 4))
			m4++;
		if (!(val % 5))
			m5++;
	}
	
	printf("%d Multiplo(s) de 2\n", m2);
	printf("%d Multiplo(s) de 3\n", m3);
	printf("%d Multiplo(s) de 4\n", m4);
	printf("%d Multiplo(s) de 5\n", m5);
	return 0;
}
