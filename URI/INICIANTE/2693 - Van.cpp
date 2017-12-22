// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Van
// Nível: 5
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2693

#include <bits/stdc++.h>

using namespace std;

struct aluno
{
	string nome;
	char sigla;
	int custo;
};

bool cmp (aluno a, aluno b)
{
	if (a.custo != b.custo)
		return a.custo < b.custo;
	else if (a.sigla != b.sigla)
		return a.sigla < b.sigla;
	return a.nome < b.nome;
}

int main()
{

	
	int n, w;
	char c;
	string p;

	while(scanf("%d", &n) != EOF)
	{
	
		aluno g[10010];
		for (int i = 0; i < n; i++)
		{
			cin >> p >> c >> w;
			g[i].nome = p;
			g[i].sigla = c;
			g[i].custo = w;
		}
	
		sort(g, g+n, cmp);
	
		for (int i = 0; i < n; i++)
			printf("%s\n", g[i].nome.c_str());
	}	
	return 0;
}
