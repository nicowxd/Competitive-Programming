// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Faixa de Letras
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1276

#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s;
	while(getline(cin, s))
	{
		int len = (int) s.size(), lt[27] = {0};

		for (int i = 0; i < len; i++)
		{
			if (isalpha(s[i]))
				lt[s[i] - 'a']++;
		}
	
		bool first = true;
		for (int i = 0; i <= 26; i++)
		{
			int j = i;
			bool enter = false;
			while(lt[j] >= 1)
			{
				enter = true;
				j++;
			}
			if (j-1 == i and enter)
			{
				if (first)
				{
					printf("%c:%c", 'a'+i, 'a'+i);
					first = false;
				}
			       	else 
					printf(", %c:%c", 'a'+i, 'a'+i);
			}
			else if (j-1 != i and enter)
			{
				if (first)
				{
					printf("%c:%c", 'a'+i, 'a'+j-1);
					first = false;
				}
				else
					printf(", %c:%c", 'a'+i, 'a'+j-1);
			}
			i = j;
		}
		printf("\n");
	}

	return 0;
}
