// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Móbile
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2323

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;

vector<vi> AdjList;

bool check = true;

int BFS(int x)
{
	int atual, nivel, total = 1;
	
	for (int i = 0; i < (int) AdjList[x].size(); i++)
	{
		nivel = BFS(AdjList[x][i]);	
		if (i == 0)
			atual = nivel;
		else if (atual != nivel)
			check = false;
		total += nivel;
	}
	return total;
}


int main()
{

	int n, v, u;
	scanf("%d", &n);
	AdjList.assign(n+1, vi());

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &v, &u);
		AdjList[u].push_back(v);
	}

	BFS(0);

	if (check)
		printf("bem\n");
	else
		printf("mal\n");

	return 0;
}
