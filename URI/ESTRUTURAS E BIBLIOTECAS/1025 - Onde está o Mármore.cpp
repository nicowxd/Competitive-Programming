// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Onde está o Mármore?
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1025

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;
	

int main()
{
	vector<int> marm;
	vector<int>::iterator it;
	//freopen("in", "r", stdin);
	//freopen("out", "w", stdout);
	int n, q,value,j=1;
	while(scanf("%d %d", &n, &q), (n || q))
	{
	for (int i = 0; i < n; i++)
	{
	scanf("%d", &value);
	marm.push_back(value);
	}
	sort(marm.begin(), marm.end());
	/*printf("sequencia: ");
	for (int i = 0; i < n; i++)
	{
	printf("%d ", marm[i]);
	}
	*/
	printf("CASE# %d:\n", j);
	j++;
	for (int i = 0; i < q; i++)
	{
	scanf("%d", &value);
	if (binary_search(marm.begin(), marm.end(), value))
	{
	it = lower_bound(marm.begin(), marm.end(), value);
	printf("%d found at %d\n", value, it-marm.begin()+1);
	}
	else
	{
	printf("%d not found\n", value);	
	}
	}
	marm.clear();
	}
	return 0;
}
