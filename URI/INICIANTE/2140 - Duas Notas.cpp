// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Duas Notas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2140

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int notas[6] = {2, 5, 10, 20, 50, 100};
	int n, m;
		
	while(scanf("%d %d", &n, &m), n  && m)
	{
		int k = m - n;
	
		bool found = false;
		
		for (int i = 0; i < 6 && !found; i++)
		{
			for (int j = 0; j < 6 && !found; j++)
			{
				if (notas[i] + notas[j] == k)
					found = true;
			}
		}
		
		if(found)
			printf("possible\n");
		else
			printf("impossible\n");
	} 
	return 0;
}
