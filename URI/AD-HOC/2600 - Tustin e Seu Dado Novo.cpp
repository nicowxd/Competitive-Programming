// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Tustin e Seu Dado Novo
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2600

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, d[6];
	set<int> v;
	scanf("%d", &n);

	while(n--)
	{
		v.clear();
		for (int i = 0; i < 6; i++)
		{
			scanf("%d", d+i);
			if (d[i] >= 1 and d[i] <= 6)
				v.insert(d[i]);
		}
		
		if ((d[0] + d[5]) == 7 and (d[1] + d[3]) == 7 and (d[2] + d[4]) == 7)
		{
			if ((int)v.size() == 6)
				puts("SIM");
			else
				puts("NAO");
		}
		else
			puts("NAO");
	}
		
	return 0;
}
