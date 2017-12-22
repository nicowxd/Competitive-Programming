// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Vogais Alienígenas
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2150

#include <bits/stdc++.h>

using namespace std;

int main()
{

	string k;
	while(cin >> k)
	{
		getchar();

		string ph;
		getline(cin, ph);
		
		int ans = 0; 

		for (int i = 0; i < (int) ph.size(); i++)
		{
			for (int j = 0; j < k.size(); j++)
				if (ph[i] == k[j])
					ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}
