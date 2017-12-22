// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Procurando Subsequências
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2126

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int caso = 0;
	string n1, n2;
	while(cin >> n1)
	{
		cin >> n2;
		
		caso++;

		size_t found = n2.find(n1);
		int qty = 0;
		
		int last = (int) found;
		while (found != n2.npos)
		{
			qty++;
			last = (int) found;
			found = n2.find(n1, found+1);
		}
		
		printf("Caso #%d:\n", caso);
		if (qty == 0)
			printf("Nao existe subsequencia\n");
		else
		{
			printf("Qtd.Subsequencias: %d\n", qty);
			printf("Pos: %d\n", last+1);
		}
		
		printf("\n");
	}
	return 0;
}
