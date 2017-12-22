// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Ele Está Impedido!
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1410

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, d;
	while(scanf("%d %d", &a, &d), a || d)
	{
		int x, ataq = 1e9, def[12345];
		for (int i = 0; i < a; i++)
		{
			scanf("%d", &x);
			if (x < ataq)
				ataq = x;
		}
		for (int i = 0; i < d; i++)
			scanf("%d", &def[i]);
		
		sort(def, def+ d);
		if (ataq < def[1])
			printf("Y\n");
		else
			printf("N\n");
	}
	return 0;
}
