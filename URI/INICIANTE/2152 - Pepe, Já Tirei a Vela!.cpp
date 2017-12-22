// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Pepe, Já Tirei a Vela!
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2152

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;	
	scanf("%d", &n);
		
	while(n--)
	{
		int h, m, o;
		scanf("%d %d %d", &h, &m, &o);
		
		if (o)
		{
			if (h > 9)
			{
				if (m > 9)
					printf("%d:%d - A porta abriu!\n", h, m);
				else
					printf("%d:0%d - A porta abriu!\n", h, m);
			}
			else
			{
				if (m > 9)
					printf("0%d:%d - A porta abriu!\n", h, m);
				else
					printf("0%d:0%d - A porta abriu!\n", h, m);
			}
		}
		else
		{
			if (h > 9)
			{
				if (m > 9)
					printf("%d:%d - A porta fechou!\n", h, m);
				else
					printf("%d:0%d - A porta fechou!\n", h, m);
			}
			else
			{
				if (m > 9)
					printf("0%d:%d - A porta fechou!\n", h, m);
				else
					printf("0%d:0%d - A porta fechou!\n", h, m);
			}
		}
	}
	return 0;
}
