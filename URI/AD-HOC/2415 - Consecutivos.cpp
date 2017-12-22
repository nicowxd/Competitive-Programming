// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Consecutivos
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2415

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[12345];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", v+i);
	
	int ans = 1, sum = 1, start = v[0];
	for (int i = 1; i < n; i++)
	{	
		if (v[i] == v[i-1])
			sum++;
		else
			sum = 1;
		ans = max(ans, sum);
	}
	
	printf("%d\n", ans);
	return 0;
}
