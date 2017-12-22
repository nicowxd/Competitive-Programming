// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Leitura Múltipla
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1262

#include <bits/stdc++.h>

using namespace std;

int main()
{

	string hist;
	int p;
	while(cin >> hist)
	{
		scanf("%d", &p);
		int ans = 0, cnt = 0;	
		if (p == 1)
			printf("%d\n",(int) hist.size());
		else
		{
			for (int i = 0; i < (int) hist.size(); i++)
			{
				if (hist[i] == 'W')
				{
					ans++;
					cnt = 0;
				}
				else
				{
					cnt++;
					if (cnt == 1)
						ans++;
					else if (cnt == p)
						cnt = 0;
				}
			}
		printf("%d\n", ans);
		}
	}			
	return 0;
}
