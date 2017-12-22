// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: O Último Analógimôn
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2520

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;

const int dir[][2] = {1,0,-1,0,0,1,0,-1};
int n, m, v[123][123], vis[123][123];
ii s, e;

int bfs()
{
	queue< pair<int, int> > q;
	vis[s.first][s.second] = 0;
	q.push(s);
	
	while(!q.empty())
	{
		ii p = q.front();
		q.pop();
		
		for (int i = 0; i < 4; i++)
		{
			ii d = make_pair(p.first + dir[i][0], p.second + dir[i][1]);
			if (d.first == -1 or d.first == n or d.second == -1 or d.second == m) continue;
			if (vis[d.first][d.second]) continue;
			vis[d.first][d.second] = 1 + vis[p.first][p.second];
			q.push(d);
		}
	}
	
	return vis[e.first][e.second];
}

int main()
{

	while(scanf("%d %d", &n, &m) != EOF)
	{
		memset(v, 0, sizeof v);
		memset(vis, 0, sizeof vis);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				scanf("%d", &v[i][j]);
				if (v[i][j] == 1)
					s = make_pair(i,j);
				if (v[i][j] == 2)
					e = make_pair(i,j);
			}
		}

		if (s.first == e.first and s.second == e.second)
			cout << "0" << endl;
		else
			cout << bfs() << endl;
	}
	return 0;
}
