// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Camisetas
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1258

	#include <bits/stdc++.h>

using namespace std;

struct camisas
{
	string nome;
	string cor;
	char tam;
} camisa[60];

bool cmp(camisas a, camisas b)
{
	if (a.cor == b.cor)
	{
		if (a.tam == b.tam)
			return a.nome < b.nome;
		else
			return a.tam > b.tam;
	}
	return a.cor < b.cor;
}

int main()
{

	int n, caso = 1;
	char ptam;
	char cores[15];
	while(scanf("%d", &n), n)
	{
		if (caso > 1)
			printf("\n");
		caso++;
	
		for (int i = 0; i < n; i++)
		{
			cin.get();
			getline(cin, camisa[i].nome);
			scanf("%s %c", cores, &camisa[i].tam);
			camisa[i].cor = cores;
		}
		sort(camisa, camisa+n, cmp);
	
		for (int i = 0; i < n; i++)
		{
			printf("%s %c %s\n", camisa[i].cor.c_str(), camisa[i].tam, camisa[i].nome.c_str());
		}
	}
	return 0;
}
