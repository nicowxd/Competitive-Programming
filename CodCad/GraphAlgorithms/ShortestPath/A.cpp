#include <cstdio>
#include <queue>
#include <utility>

using namespace std;

#define INF 1e9

const int dir[][2] = {1, 0, -1, 0, 0, 1, 0, -1};
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main()
{

	int n, w, dist[110][110], mat[110][110];
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &mat[i][j]);
			dist[i][j] = INF;
		}
	}
	dist[0][0] = 0;
	priority_queue< pair<int, ii>, vector< pair<int, ii> >, greater< pair<int, ii> > > pq; pq.push(make_pair(0, ii(0, 0)));
	
	while(!pq.empty())
	{
		pair<int, ii> front = pq.top(); pq.pop();
		int d = front.first, i = front.second.first, j = front.second.second;
		if (d > dist[i][j]) continue;

		for (int k = 0; k < 4; k++)
		{
			int x = i + dir[k][0], y = j + dir[k][1];
			if (x < 0 or x >= n or y < 0 or y >= n)
				continue;
			else
			{
				if (dist[i][j] + mat[x][y] < dist[x][y])
				{
					dist[x][y] = dist[i][j] + mat[x][y];
					pq.push(make_pair(dist[x][y], ii(x, y)));
				}
			}
		}
	}

	printf("%d\n", dist[n-1][n-1]);
	
	return 0;
}
