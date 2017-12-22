// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Virus
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2567

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[1234];
	while(scanf("%d", &n) != EOF)
	{
		
		int ans = 0;
		for (int i = 0; i < n; i++)
			scanf("%d", v+i);
	
		sort(v, v+n);
		
		for (int i = 0; i < n/2; i++)
			ans += (v[n-1-i] - v[i]);
			
		printf("%d\n", ans);
	}
	return 0;
}
