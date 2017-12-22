// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Contando Carneirinhos
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1609

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	scanf("%d", &t);	
	while(t--)
	{
		set<int> carn;
		int n, val;	
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &val);
			carn.insert(val);
		}
		printf("%d\n", (int) carn.size());
	}
	return 0;
}
