// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Escalonamento Ótimo
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2403

#include <bits/stdc++.h>

using namespace std;

#define white -1
#define black 1
#define gray 2

typedef vector<int> vi;
	
vector<vi> AdjList;
vi seen, answer;

bool dfsCheck(int u)
{
	seen[u] = gray;
	for (int i = 0; i < (int) AdjList[u].size(); i++)
	{
		int v = AdjList[u][i];
		if (seen[v] == white)		
		{
			if (!dfsCheck(v))
				return false;
		}
		else if (seen[v] == gray)
			return false;
	}
	seen[u] = black;
	return true;
}

int main()
{

	int n, m, u, v, g[50000] = {0};
	scanf("%d %d", &n, &m);

	AdjList.assign(n, vi());
	seen.assign(n, white);

	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &u, &v);
		AdjList[u].push_back(v);
		g[v]++;
	}
	
	bool noCycle = true;
	for (int i = 0; i < n and noCycle; i++)
		noCycle = dfsCheck(i);
	
	if (noCycle)
	{

		 priority_queue<int, vector<int>, greater<int> > q;

       		 for (int i = 0; i < n; i++)
         	   	if (!g[i]) 
		   		q.push(i);

        	 while (!q.empty())
       	         {
 			int u = q.top(); q.pop();
           	        cout << u << endl;

                        for (auto it = AdjList[u].begin(); it != AdjList[u].end(); it++)
				if (--(g[*it]) == 0) 
					q.push(*it);
		}
	}
	else
		printf("*\n");

	return 0;

}
