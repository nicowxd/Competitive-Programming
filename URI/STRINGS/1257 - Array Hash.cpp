// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Array Hash
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1257

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, l;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &l);
		int ans = 0;
		string hash;
		for (int i = 0; i < l; i++)
		{
			cin >> hash;
			for (int j = 0; j < hash.size(); j++)
			{
				ans += (hash[j] - 'A') + i + j;
			}
		}
	
		printf("%d\n", ans);
	}
	return 0;
}
