// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Rot13
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1249

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string rot;
	while(getline(cin, rot))
	{
		for (int i = 0; i < rot.size(); i++)
		{
			if (!isalpha(rot[i]))
				cout << rot[i];
			else
			{
				if (isupper(rot[i]))
				{
					if (rot[i] + 13 <= 90)
						printf("%c", rot[i] + 13);
					else
						printf("%c", rot[i] - 13);
				}
				else
					if (rot[i] + 13  <= 122)
						printf("%c", rot[i] + 13);
					else
						printf("%c", rot[i] - 13);
			}
		}
		printf("\n");
	}
	return 0;
}

			

