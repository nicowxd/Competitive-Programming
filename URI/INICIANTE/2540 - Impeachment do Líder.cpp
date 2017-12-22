// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Impeachment do Líder
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2540

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	while(scanf("%d", &n) != EOF)
	{
		int v;
		double cnt = 0.0, yes = n * (2.0/3.0);
		
		for (int i = 0; i < n; i++)
		{	
			scanf("%d", &v);
			if (v)
				cnt++;
		}
		if (cnt >= yes)
			printf("impeachment\n");
		else
			printf("acusacao arquivada\n");
	}
	return 0;
}
