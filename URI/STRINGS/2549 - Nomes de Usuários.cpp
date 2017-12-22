// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Nomes de Usuários
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2549

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, a;
	char ph[110], *p;

	while(scanf("%d %d%*c", &n, &a) != EOF)
	{
		int ans = 0;
		set<string> nome;

		for (int i = 0; i < n; i++)
		{
			string aux = "";

			gets(ph);
			
			for (p = strtok(ph, " "); p; p = strtok(NULL, " "))
				aux += p[0];
			if (nome.find(aux) != nome.end())
				ans++;
			else
				nome.insert(aux);
		}

		printf("%d\n", ans);
	}

	return 0;
}
