// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Dígitos Diferentes
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1285

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m;
	set<char> k;
	while(scanf("%d %d", &n, &m) != EOF)
	{
		int ans = 0;
		char num[10];
		for (int i = n; i <= m; i++)
		{
			sprintf(num, "%d", i);	
			int tam = strlen(num);
			bool rep = false;
			k.clear();
			for (int j = 0; j < tam and !rep; j++)
			{
				if (k.find(num[j]) != k.end())
					rep = true;
				else
					k.insert(num[j]);
			}
			if (!rep)
				ans++;
		}
		
		printf("%d\n", ans);
	}
				
	return 0;
}
