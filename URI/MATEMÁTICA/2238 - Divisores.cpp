// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Divisores
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2238

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	
	bool flag = false;
	int n = 1;
	for (; n < sqrt(c); n++)
	{
		if (!(c % (n*a)) and !((n*a) % a) and ((n*a) % b) and (d % (n*a)))
		{
			flag = true;
			break;
		}
	}
	if (flag)
		printf("%d\n", n*a);
	else
		printf("-1\n");

	return 0;
}
