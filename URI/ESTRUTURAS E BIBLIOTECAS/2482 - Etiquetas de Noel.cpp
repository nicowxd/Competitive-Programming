// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Etiquetas de Noel
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2482

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	string a, b;
	map<string, string> idi;

	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		getline(cin, a);
		getline(cin, b);
		idi[a] = b;
	}
	
	int m;
	scanf("%d", &m);
	getchar();
	for (int i = 0; i < m; i++)
	{
		getline(cin, a);
		getline(cin, b);
		cout << a << endl;
		cout << idi[b] << endl << endl;
	}

	return 0;
}
