// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Museu Virtual 3D
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2548

#include <bits/stdc++.h>

using namespace std;

bool cmp (int i, int j) 
{
	return i > j;
}

int main()
{

	int n, m, v[1000];
	while(scanf("%d %d", &n, &m) != EOF)
	{
		
		for (int i = 0; i < n; i++)
			scanf("%d", v+i);
		
		sort(v, v+n, cmp);
			
		int ans = 0;
		for (int i = 0; i < m; i++)
			ans+= v[i];
		
		printf("%d\n", ans);
	}	
	return 0;
}
