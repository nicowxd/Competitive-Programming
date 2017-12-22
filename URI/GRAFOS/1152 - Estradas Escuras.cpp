// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Estradas Escuras
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1152

/*
 * Grafos - problema 1152 URI
 * MST - MINIMUM SPANNING TREE
 * Algoritmo: PRIM
 *
 */

#include <iostream>
#include <queue>
#include <utility>

using namespace std;

typedef pair <int, int> ii;
typedef vector <ii> vii;

vector <int> visitados;
vector <vii> adjList;
priority_queue <ii> caminhosDisponiveis;

void process (int vtx)
{
	visitados[vtx] = 1; // 1 = visitado

	for (unsigned int vizinho = 0; vizinho < adjList[vtx].size(); vizinho++)
	{
		ii v = adjList[vtx][vizinho];

		if (!visitados[v.first])
			caminhosDisponiveis.push(ii(-v.second, -v.first));
	}
}

int main (void)
{
	int nV, nA, custoTotal, custo_mst;
	int vertice, vfinal, custo;
	int u, w;

	cin >> nV >> nA;

	while (nV)
	{
		adjList.clear();
		adjList.resize(nV);
		visitados.assign(nV, 0);
		custoTotal = 0;
		custo_mst = 0;

		for (unsigned int a = 0; a < nA; a++)
		{
			cin >> vertice >> vfinal >> custo;

			custoTotal += custo;

			adjList[vertice].push_back(ii(vfinal, custo));
			adjList[vfinal].push_back(ii(vertice, custo));

		}

		process(0);

		while (!caminhosDisponiveis.empty())
		{
			ii front = caminhosDisponiveis.top();
			caminhosDisponiveis.pop();

			u = -front.second, w = -front.first;

			if (!visitados[u])
				custo_mst += w, process(u);
		}

		cout << custoTotal - custo_mst << endl;

		cin >> nV >> nA;
	}

	return 0;
}


