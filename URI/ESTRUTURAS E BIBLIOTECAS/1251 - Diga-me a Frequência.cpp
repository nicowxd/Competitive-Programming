// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Diga-me a Frequência
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1251

#include <bits/stdc++.h>

using namespace std;

struct frequency{

	int ascii;
	int qty = 0;
};

bool cmp(frequency a, frequency b)
{
	if (a.qty == b.qty)
		return a.ascii > b.ascii;
	
	return a.qty < b.qty;
}

int main()
{
	
	string text;
	int cnt = 0;
	
	while(cin >> text)
	{
		frequency vet[128];
		
		if (cnt > 0)
			printf("\n");
	
		cnt++;
		for (int i = 0; i < (int) text.size(); i++)
		{
			vet[(int)text[i]].ascii = (int) text[i];
			vet[(int)text[i]].qty++;
		}
		
		sort(vet, vet+128, cmp);
		
		for (int i = 0; i < 128; i++)
		{
			if (vet[i].qty > 0)
				printf("%d %d\n", vet[i].ascii, vet[i].qty);
		}
		
	}
	return 0;
}
