// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Peça Perdida
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2322

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d", &n);

	set<int> p;
	set<int>::iterator it;
	for (int i = 1; i <= n; i++)
		p.insert(i);
	
	int x;
	for (int i = 0; i < n-1; i++)
	{
		scanf("%d", &x);
		p.erase(x);
	}
	
	it = p.begin();
	cout << (*it) << endl;
	return 0;
}
