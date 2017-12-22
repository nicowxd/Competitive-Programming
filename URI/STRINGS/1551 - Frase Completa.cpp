// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Frase Completa
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1551

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	string frase;
	set<char> alfa;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		alfa.clear();
		getline(cin, frase);
		
		for (int j = 0; j < (int) frase.size(); j++)
		{
			if (frase[j] >= 'a' && frase[j] <= 'z')
				alfa.insert(frase[j]);
		}
		
		if (alfa.size() == 26)
			printf("frase completa\n");
		else if (alfa.size() >= 13)
			printf("frase quase completa\n");
		else
			printf("frase mal elaborada\n");
	}
	return 0;
}
