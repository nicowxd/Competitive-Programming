// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Fila
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2460

#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n, x;
	vector<int> v;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{	
		scanf("%d", &x);
		v.push_back(x);
	}
	
	int m;
	vector<int>::iterator it;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &x);
		it = find(v.begin(), v.end(), x);
		v.erase(it);
	}
	
	printf("%d", v[0]);
	for (int i = 1; i < n-m; i++)
		printf(" %d", v[i]);
		
	printf("\n");
	return 0;
}
