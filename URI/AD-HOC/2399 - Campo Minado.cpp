// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Campo Minado
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2399

#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n, v[60];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", v+i);
	
	if (n == 1)
	{
		printf("%d\n", v[0]);
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d\n", v[i] + v[i+1]);
		else if (i == n-1)
			printf("%d\n", v[i] + v[i-1]);
		else 
			printf("%d\n", v[i] + v[i-1] + v[i+1]);
	}

	return 0;
}
