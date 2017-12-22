// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: A Biblioteca do Senhor Se...
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2137

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	while(scanf("%d", &n) != EOF)
	{
		vector<string> w;
		string k;
		for (int i = 0; i < n; i++)
		{
			cin >> k;
			w.push_back(k);
		}
		
		sort(w.begin(), w.end());
		
		for (int i = 0; i < n; i++)
			cout << w[i] << endl;
		
	}
	return 0;
}
