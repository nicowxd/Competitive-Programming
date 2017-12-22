#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;

const int dir[][2] = {1,0,-1,0,0,1,0,-1};
int n, m, v[1234][1234], vis[1234][1234];

ii s, e;

int bfs()
{
	queue< pair<int, int> > q;
	vis[s.first][s.second] = 1;
	q.push(s);
	
	while(!q.empty())
	{
		ii p = q.front();
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			ii d = make_pair(p.first + dir[i][0], p.second + dir[i][1]);
			if (d.first == -1 || d.first == n || d.second == -1 || d.second == m) continue;
			if (v[d.first][d.second] == 0 || vis[d.first][d.second]) continue;
			vis[d.first][d.second] = 1 + vis[p.first][p.second];
			q.push(d);
		}
	}
	
			
	return vis[e.first][e.second];
}
int main()
{

	scanf("%d %d", &n, &m);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &v[i][j]);
			if (v[i][j] == 3)
				s = make_pair(i,j);
			if (v[i][j] == 2)
				e = make_pair(i,j);
		}
	}
	
	cout << bfs() << endl;
	
	return 0;
}
