// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Soma das Casas
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2422

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[123456], k;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
		scanf("%d", v + i);
	
	scanf("%d", &k);
	
	int i = 0, j = n-1;
	while(v[i] + v[j] != k)
	{
		if (v[i] + v[j] < k)
			i++;
		else
			j--;
	}

	printf("%d %d\n", v[i], v[j]);
	return 0;
}
