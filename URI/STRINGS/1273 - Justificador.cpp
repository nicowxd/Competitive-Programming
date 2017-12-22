// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Justificador
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1273

#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{	
	
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n,caso = 1;
	while(scanf("%d", &n), n)
	{
		if (caso > 1)
			printf("\n");
		caso++;
		string nomes[60];
		int tam = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> nomes[i];
			tam = max(tam, (int) nomes[i].length());
		}
		for (int i = 0; i < n; i++)
		{
			cout << setw(tam) << nomes[i] << endl;
		}
	}
	return 0;
}


