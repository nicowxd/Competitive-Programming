// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Troca de Cartas
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1104

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b;
	while(scanf("%d %d", &a, &b), a || b)
	{
		set<int> alice;
		set<int> beatriz;
		set<int>::iterator it;
		int al = 0, be = 0, val;
		for (int i = 0; i < a; i++)
		{
			scanf("%d", &val);
			alice.insert(val);
		}
		for (int i = 0; i < b; i++)
		{
			scanf("%d", &val);
			beatriz.insert(val);
		}
		for (it = alice.begin(); it != alice.end(); it++)
		{
			if (beatriz.find(*it) == beatriz.end())
				al++;
		}
		for (it = beatriz.begin(); it != beatriz.end(); it++)
		{
			if (alice.find(*it) == alice.end())
				be++;
		}
		printf("%d\n", al >= be ? be : al);
	}
	return 0;
}
