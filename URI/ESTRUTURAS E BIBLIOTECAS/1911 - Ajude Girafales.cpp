// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Ajude Girafales
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1911

#include <bits/stdc++.h>

using namespace std;

int main()
{
	map<string, string> nomes;
	int n;
	while(scanf("%d", &n), n)
	{
		nomes.clear();
		string name, ass, avalia;
		for (int i = 0; i < n; i++)
		{
			cin >> name >> ass;
			nomes[name] = ass;
		}
		
		int k, cnt = 0;
		scanf("%d", &k);
		for (int i = 0; i < k; i++)
		{
			cin >> name >> ass;
			avalia = nomes[name];
			int diff = 0;
		 	for (int j = 0; j < (int) avalia.size(); j++)
			{
				if (avalia[j] != ass[j])
					diff++;
			}
			if (diff > 1)
				cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}	
