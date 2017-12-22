// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Abracadabra
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2484

#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	char str[1000];

	while(scanf("%s", str) != EOF)
	{
		int len = strlen(str);
		
		for (int i = 0; i < len; i++)
		{
			for (int j = 0; j < i; j++)
				printf(" ");
			for (int j = 0; j < (len-i); j++)
			{
				if (j == (len-i-1))
					printf("%c\n", str[j]);
				else
					printf("%c ", str[j]);
			}
		}
		printf("\n");
	}

	return 0;
}
