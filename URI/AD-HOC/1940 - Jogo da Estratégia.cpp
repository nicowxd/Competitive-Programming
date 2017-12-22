// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Jogo da Estratégia
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1940

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

struct jogador
{
	int id;
	int pontos;
};

jogador strat[510];

bool cmp(jogador a, jogador b)
{
	if (a.pontos == b.pontos)
	{
		return a.id > b.id;
	}
	return a.pontos > b.pontos;
}

int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n, r, val;
	scanf("%d %d", &n, &r);
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &val);
			strat[j].id = j+1;
			strat[j].pontos+= val;
			
		}
	}
	sort(strat, strat+n, cmp);
	printf("%d\n", strat[0].id);
	return 0;
}


