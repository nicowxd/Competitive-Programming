// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Letras
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2457

#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int pal = 0, qty = 0;
	char c, *p, text[1020];
	bool has;

	scanf("%c%*c", &c);
	gets(text);

	for (p = strtok(text, " "); p; p = strtok(NULL, " "))
	{
		has = false;
		for (int i = 0; p[i] and !has; i++)
		{
			if (p[i] == c)
				has = true;
		}
		if (has)
			qty++;
		pal++;
	}
	
	printf("%.1lf\n", (100.0*qty)/pal);
	return 0;
}
