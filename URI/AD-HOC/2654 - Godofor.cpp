// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Godofor
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2654

#include <bits/stdc++.h>

using namespace std;

struct godo
{
	string nome;
	int pw, dk, dd;
};

bool cmp (godo a, godo b)
{
	if (a.pw != b.pw)
		return a.pw > b.pw;
	if (a.dk != b.dk)
		return a.dk > b.dk;
	if (a.dd != b.dd)
		return a.dd < b.dd;
	return a.nome < b.nome;
}

int main()
{


	int n, p, d, e;
	string s;
	godo g[110];
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		cin >> s >> p >> d >> e;
		g[i].nome = s;
		g[i].pw = p;
		g[i].dk = d;
		g[i].dd = e;
	}

	sort(g, g+n, cmp);

	printf("%s\n", g[0].nome.c_str());

	return 0;
}
