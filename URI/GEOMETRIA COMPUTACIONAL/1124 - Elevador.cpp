// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Elevador
// Nível: 3
// Categoria: GEOMETRIA COMPUTACIONAL
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1124

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int l, c, r1, r2;
	while(scanf("%d %d %d %d", &l, &c, &r1, &r2), l && c && r1 && r2)
	{
		if (2*r1 <= l && 2*r1 <= c && 2*r2 <= l && 2*r2 <= c)
		{
			int xc = l-r1-r2;
			int yc = c-r1-r2;
			if ((double) (r1+r2) <= sqrt((double)(xc*xc + yc*yc)))
				printf("S\n");			
			else
				printf("N\n");
		}
		else
			printf("N\n");
	}
	return 0;
}
			
