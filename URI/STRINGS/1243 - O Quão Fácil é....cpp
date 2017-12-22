// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: O Quão Fácil é...
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1243

#include <bits/stdc++.h>

using namespace std;

int main()
{


	char ph[1010];
	char *p;
		
	while(gets(ph))
	{
		int qty = 0, sum = 0;
		for (p = strtok(ph, " "); p; p = strtok(NULL, " "))
		{
			bool end = false, has = false, word = true;
			int acc = 0;

			for (int i = 0; i < strlen(p) and word; i++)
			{
				if (isdigit(p[i]))
					word = false;
				else if (p[i] == '.' and i != strlen(p) - 1)
					word = false;
				else if (isalpha(p[i]))
				{
					acc++;
					has = true;
				}
			}
			
			if (word and has)
			{
				sum += acc;
				qty++;
			}
		}
		
		int ans;
		
		if (qty == 0)
			ans = 0;
		else
			ans = sum / qty;

		if (ans <= 3)
			puts("250");
		else if (ans >= 4 and ans < 6)
			puts("500");
		else
			puts("1000");
	}
	return 0;
}
