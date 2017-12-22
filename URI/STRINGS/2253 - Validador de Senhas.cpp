// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Validador de Senhas
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2253

#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s;
	
	while(getline(cin, s))
	{
		if ((int) s.size() < 6 || (int) s.size() > 32)
			printf("Senha invalida.\n");
		else
		{
			bool invalid = false;
			int maiu = 0, minu = 0, num = 0;
			for (int i = 0; i < (int) s.size(); i++)
			{	
				if (isupper(s[i]))
					maiu++;
				else if (islower(s[i]))
					minu++;
				else if (isdigit(s[i]))
					num++;

				if ((s[i] > 57 && s[i] < 65) || (s[i] > 90 && s[i] < 97) || (s[i] > 122) || (s[i] < 48))
					invalid = true;
			}
			
			if (!invalid && num >= 1 && maiu >= 1 && minu >= 1)
				printf("Senha valida.\n");
			else
				printf("Senha invalida.\n");
		}
	}
			
	return 0;
}
