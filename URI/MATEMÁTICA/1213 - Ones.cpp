// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Ones
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1213

#include <bits/stdc++.h>

using namespace std;

int main()
{


	int n;

	while(scanf("%d", &n) != EOF)
	{
		int v = 1, i = 1;

		while(v % n != 0)
		{
			v *= 10;
			v += 1;
			v %= n;
			i++;
		}
		
		printf("%d\n", i);
	}


	return 0;
}
