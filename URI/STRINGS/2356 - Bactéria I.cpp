// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Bactéria I
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2356

#include <bits/stdc++.h>

using namespace std;

int main()
{

	string d, s;
	while(cin >> d >> s)
	{
		if (d.find(s) != d.npos)
			printf("Resistente\n");
		else
			printf("Nao resistente\n");
	}
	return 0;
}
