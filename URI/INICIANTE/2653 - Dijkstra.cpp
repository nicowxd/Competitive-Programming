// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Dijkstra
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2653

#include <bits/stdc++.h>

using namespace std;

int main()
{

	set<string> a;
	string x;

	while(cin >> x)
		a.insert(x);
	
	printf("%d\n", (int) a.size());
	return 0;
}
