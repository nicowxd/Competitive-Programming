// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Enisvaldo Com Fome
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2004

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int q;
	map<int, int> ali;
	map<int, int>::iterator it;
	scanf("%d", &q);	
	while(q--)
	{
		int n, tipo, peso, ans = 0;
		ali.clear();
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d %d", &tipo, &peso);
			if (ali.find(tipo) == ali.end())
				ali[tipo] = peso;
			else
			{
				if (ali[tipo] >= 10 && ali[tipo] <= 100) 
				{
					if (peso >= 10 && peso <= 100 && peso > ali[tipo])
						ali[tipo] = peso;
				}
				else
				{
					if ((peso >= 10 && peso <= 100) || peso > ali[tipo])
						ali[tipo] = peso;
				}
			}
		}
		for (it = ali.begin(); it != ali.end(); it++)
			ans+= it->second;
		printf("%d\n", ans);
	}
			
	return 0;
}
