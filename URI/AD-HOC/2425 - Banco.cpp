// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Banco
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2425

#include <bits/stdc++.h>

using namespace std;

int main()
{


	int c, n, t[10010], d[10010];
	priority_queue< int > pq;

	scanf("%d %d", &c, &n);

	for (int i = 0; i < n; i++)
		scanf("%d %d", t+i, d+i);
	
	int i = 0, ans = 0, out;
	
	while (c > 0)
	{
		int out = t[i] + d[i];
		pq.push(-out);
		c--;
		i++;
	}

	for (; i < n; i++)
	{
		int topo = pq.top();
		pq.pop();
		if ((-topo) - t[i] > 20)
			ans++;
		if (t[i] > -topo)
			out = t[i] + d[i];
		else
			out = -topo + d[i];
		pq.push(-out);
	}

	printf("%d\n", ans);
	return 0;
}
