// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Painel de Posições
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1375

#include <bits/stdc++.h>

using namespace std;

map<int, int> posi;
map<int, int>::iterator it;

int main()
{
	int x, a, b;
	bool flag;
	while(scanf("%d", &x), x)
	{
		posi.clear();
		flag = true;
		for (int i = 1; i <= x; i++)
		{
			scanf("%d %d", &a, &b);
			if (b + i >= 1 && b + i <= x && posi[b+i] == 0)
				posi[b+i] = a;
			else
			{
				flag = false;
			}
		}
		
		if (flag)
		{
			it = posi.begin();
			for (int i = 1; i <= x; i++, it++)
			{
				if (i == x)
					cout << it->second << "\n";
				else
					cout << it->second << " ";
			}
		}
		else
			printf("-1\n");
	}
	return 0;
} 
			
