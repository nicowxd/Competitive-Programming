// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Carteiro
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2448

#include <bits/stdc++.h>

using namespace std;

int main()
{
		
	int n, m, x;
	map<int, int> v;
	map<int, int>::iterator it;
	scanf("%d %d", &n, &m);
		
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		v[x] = i;
	}

	int ans = 0, ac = 0;
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &x);
		it = v.find(x);
		ans += abs(ac-(*it).second);
		ac = (*it).second;
	}
	printf("%d\n", ans);
	return 0;
}
