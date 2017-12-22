// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Notas
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2469

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, x, maior = 0;
	map<int, int> notas;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{	
		scanf("%d", &x);
		if (notas.find(x) == notas.end())
			notas[x] = 0;
		else
		{
			notas[x]++;
			if (notas[x] > maior)
				maior = notas[x];
		}
	}
	
	int ans;
	for (map<int,int>::iterator it = notas.begin(); it != notas.end(); it++)
	{
		if ((it->second) == maior)
			ans = it->first;
	}
	printf("%d\n", ans);
	return 0;
}
