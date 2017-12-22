// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Dentista
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2387

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, x, y;
	scanf("%d", &n);

	priority_queue< pair<int, int>, vector< pair<int, int> >, greater< pair<int, int> > > pq;

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		pq.push(make_pair(y,x));
	}
	
	int ans = 0, ac = 0;

	while(!pq.empty())
	{
		pair<int,int> u = pq.top();
		if (u.second >= ac)
		{
			ans++;
			ac = u.first;
		}
		pq.pop();
	}

	printf("%d\n", ans);
	return 0;
}
