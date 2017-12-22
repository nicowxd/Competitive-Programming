// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Coleção de Pomekon
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2174

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d", &n);
	
	set<string> pok;
	string name;

	getchar();
	for (int i = 0; i < n; i++)
	{
		cin >> name;
		pok.insert(name);
	}
	
	printf("Falta(m) %d pomekon(s).\n", 151-(int) pok.size()); 
	return 0;
}
