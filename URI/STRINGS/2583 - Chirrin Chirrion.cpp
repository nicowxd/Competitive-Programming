// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Chirrin Chirrion
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2583

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int c;
	string a, b;
	set<string> tot;
	set<string>::iterator it;

	scanf("%d", &c);
	
	while(c--)
	{
		int n;	
		tot.clear();

		scanf("%d", &n);
		getchar();
		for (int i = 0; i < n; i++)
		{
			cin >> a >> b;
			if (b == "chirrin" and tot.find(a) == tot.end())
				tot.insert(a);
			if (b == "chirrion" and tot.find(a) != tot.end())
				tot.erase(a);
		}
		
		printf("TOTAL\n");
		for (it = tot.begin(); it != tot.end(); it++)
			cout << (*it) << endl;
	}		
		
	return 0;
}
