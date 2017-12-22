// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Quadro De Medalhas
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2312

#include <bits/stdc++.h>

using namespace std;

typedef struct{
	string nome;
	int ouro;
	int prata;
	int bronze;
}pais;

bool cmp(pais a, pais b)
{
	if (a.ouro != b.ouro)
		return a.ouro > b.ouro;
	else if (a.prata != b.prata)
		return a.prata > b.prata;
	else if (a.bronze != b.bronze)
		return a.bronze > b.bronze;
	else
		return a.nome < b.nome;
}

int main()
{

	int n, o, p, b;
	string nacao;
	pais paises[501];
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		cin >> nacao;
		scanf("%d %d %d", &o, &p, &b);
		paises[i].nome = nacao;
		paises[i].ouro = o;
		paises[i].prata = p;
		paises[i].bronze = b;
	}

	sort(paises, paises+n, cmp);
	
	for (int i = 0; i < n; i++)
		printf("%s %d %d %d\n", paises[i].nome.c_str(), paises[i].ouro, paises[i].prata, paises[i].bronze);
	return 0;
}
