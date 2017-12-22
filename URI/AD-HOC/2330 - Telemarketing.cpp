// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Telemarketing
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2330

#include <bits/stdc++.h>

using namespace std;

int main()
{


	int n, l, v[1010] = {0}, c[1000010];

	scanf("%d %d", &n, &l);

	for (int i = 0; i < l; i++)
		scanf("%d", c+i);
	
	priority_queue< pair<int, int> > pq;
	
	int i;
	for (i = 0; i < n and i < l; i++)
		pq.push(make_pair(-(c[i]), -i));
	
	int left = (l - n);

	while(!pq.empty())
	{
		pair<int, int> topo = pq.top();
		pq.pop();

		v[-topo.second]++;
		
		if (left > 0)
		{
			pq.push(make_pair(-c[i++] + topo.first, topo.second));
			left--;
		}
	}
	
	for (int i = 0; i < n; i++)
		printf("%d %d\n", i+1, v[i]);

	return 0;
}
