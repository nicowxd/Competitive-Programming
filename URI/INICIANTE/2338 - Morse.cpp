// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Morse
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2338

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	char m[1100];

	string l[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

	scanf("%d", &t);

	while(t--)
	{
		getchar();
		scanf("%s", m);

		int len = strlen(m), k = 0, j = 0, slash = 0;
		string morse = ""; 
		char ans[1010] = "";
		bool in = false;
		
		for (int i = 0; i < len; i++)
		{
			int dot = 0;
			
			if (m[i] == '=')
				slash++;

			while (m[i] == '.')
			{
				dot++;
				i++;
				in = true;
			}
			
			if (in)
			{
				i--;
				in = false;
			}

			if (dot == 1 and slash == 1)
			{
				morse += '.';
				slash = 0;
			}
			else if (dot == 1 and slash == 3)
			{
				morse += '-';
				slash = 0;
			}
			else if (dot == 3 or dot == 7)
			{
				if (slash == 1)
					morse += '.';
				if (slash == 3)
					morse += '-';
				for (int i = 0; i < 26; i++)
				{
					if (morse == l[i])
						ans[k++] = 'a' + i;
				}
				if (dot == 7)
					ans[k++] = ' ';
				morse = "";
				slash = 0;
			}
		}
		
		if (slash == 1)
			morse += '.';
		if (slash == 3)
			morse += '-';
		for (int i = 0; i < 26; i++)
		{
			if (morse == l[i])
				ans[k++] = 'a' + i;
		}
		printf("%s\n", ans);
	}

	return 0;
}
