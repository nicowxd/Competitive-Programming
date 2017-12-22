// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Espécies de Madeira
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1260

#include <bits/stdc++.h>

using namespace std;

map<string, int>::iterator it;

int main()
{
	int n, qty, cnt = 0;
	map<string, int> spec;
	string nome;
	scanf("%d\n", &n);
	
	while(n--)
	{	
		if (cnt > 0)
			printf("\n");
		cnt++;
		qty = 0;
		spec.clear();
		while (getline(cin, nome) && nome[0] != '\0')
		{	
			if (spec.find(nome) != spec.end())
				spec[nome]++;
			else
				spec[nome] = 1;
			qty++;
		}
		
		for (it = spec.begin(); it != spec.end(); it++)
		{
			cout << it->first << " ";
			printf("%.4lf\n", ((*it).second*100.0)/qty);
		}

	}
	return 0;
}
		
