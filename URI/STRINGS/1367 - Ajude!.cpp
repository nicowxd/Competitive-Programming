// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Ajude!
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1367

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	while(scanf("%d", &n), n)
	{

		char a;
		string judge;
		int t, s = 0, p = 0, acc[30] = {0};
		
		bool pr[30] = {0};
		
		for (int i = 0; i < n; i++)
		{
			cin >> a >> t >> judge;
			
			if (judge == "correct")
			{
				if (!pr[a-'A'])
				{
					s++;
					pr[a-'A'] = true;
					p = p + t + acc[a-'A'];
				}
			}
			else
			{
				if (!pr[a-'A'])
					acc[a-'A'] += 20;
			}
		}
		printf("%d %d\n", s, p);
	}

	return 0;
}
