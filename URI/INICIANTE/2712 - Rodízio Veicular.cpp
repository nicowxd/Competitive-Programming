// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Rodízio Veicular
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2712

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	scanf("%d", &t);

	while(t--)
	{
		bool fail = false;
		string s;	

		cin >> s;
	
		for (int i = 0; i <= 2 and !fail; i++)
		{
			if (s[i] >= 'A' and s[i] <= 'Z')
				continue;
			else
				fail = true;
		}

		if (s[3] != '-' or (int) s.size() != 8)
			fail = true;

		for (int i = 4; i < (int) s.size() and !fail; i++)
		{
			if (s[i] >= '0' and s[i] <= '9')
				continue;
			else
				fail = true;
		}

		if (!fail)
		{
			if (s[7] == '1' or s[7] == '2')
				puts("MONDAY");
			else if (s[7] == '3' or s[7] == '4')
				puts("TUESDAY");
			else if (s[7] == '5' or s[7] == '6')
				puts("WEDNESDAY");
			else if (s[7] == '7' or s[7] == '8')
				puts("THURSDAY");
			else
				puts("FRIDAY");
		}
		else
			puts("FAILURE");
	}

	return 0;
}
