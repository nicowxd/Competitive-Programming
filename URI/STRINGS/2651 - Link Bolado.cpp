// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Link Bolado
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2651

#include <bits/stdc++.h>

using namespace std;

int main()
{

	char s[100010], f[6] = {'z', 'e', 'l', 'd', 'a'};

	scanf("%s", s);

	for (int i = 0; s[i]; i++)
		s[i] = tolower(s[i]);
	
	for (int i = 0; i < strlen(s); i++)
	{
		bool found = true;

		for (int j = 0; j < 5 && found; j++)
			if (i + j >= strlen(s) or f[j] != s[i+j])
				found = false;
		if (found)
		{
			printf("Link Bolado\n");
			return 0;
		}
	}

	printf("Link Tranquilo\n");
	
	return 0;
}
