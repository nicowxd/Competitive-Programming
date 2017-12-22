// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Presente?!
// Nível: 5
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1425

#include <bits/stdc++.h>

using namespace std;

unordered_set<int> pos;

void backtrack(int r, int x, int n)
{
	if (x < 1)
		return;
	if (x > n)
		return;
	
	pos.insert(x);

	backtrack(r+1, x + (2*(r+1) - 1), n);
	backtrack(r+1, x - (2*(r+1) - 1), n);
}

int main()
{

	int n, m;
	
	while(scanf("%d %d", &n, &m), n or m)
	{
		if (n >= 53)
			puts("Let me try!");
		else
		{
			pos.clear();
			backtrack(1, 1, n);
				
			if (pos.find(m) != pos.end())
				puts("Let me try!");
			else
				puts("Don't make fun of me!");
		}
	}

	return 0;
}
