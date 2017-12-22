// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Avance as Letras
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1607

#include <bits/stdc++.h>

using namespace std;

int main()
{

	
	int t;
	scanf("%d", &t);

	while(t--)
	{
		char a[100010], b[100010];

		scanf("%s %s", a, b);

		int len = strlen(a), ans = 0;

		for (int i = 0; i < len; i++)
		{
			int f = a[i] - 'a', s = b[i] - 'a';

			if (f > s)
				ans += (26 - f + s);
			else
				ans += (s - f);
		}

		printf("%d\n", ans);
	}
	return 0;
}
