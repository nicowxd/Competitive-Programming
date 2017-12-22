// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Frequencia na Aula
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2410

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, x;
	scanf("%d", &n);
	
	set<int> v;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		v.insert(x);
	}
	
	printf("%d\n", (int) v.size());
	return 0;
}
