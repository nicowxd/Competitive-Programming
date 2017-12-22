// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Corrida
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2396

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m, x;
	vector< pair<int, int> > carr;
	scanf("%d %d", &n, &m);
	
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &x);
			sum += x;
		}	
		carr.push_back(make_pair(sum, i+1));
	}
	
	sort(carr.begin(), carr.end());
	
	for (int i = 0; i < 3; i++)
		printf("%d\n", carr[i].second);

	return 0;
}
