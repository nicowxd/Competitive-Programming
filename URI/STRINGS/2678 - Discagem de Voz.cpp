// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Discagem de Voz
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2678

#include <bits/stdc++.h>

using namespace std;

int main()
{


	char n[1010];
	map<char, int> tel;
	tel['A'] = 2; tel['a'] = 2; tel['B'] = 2; tel['b'] = 2; tel['C'] = 2; tel['c'] = 2;
	tel['D'] = 3; tel['d'] = 3; tel['E'] = 3; tel['e'] = 3; tel['F'] = 3; tel['f'] = 3;
	tel['G'] = 4; tel['g'] = 4; tel['H'] = 4; tel['h'] = 4; tel['I'] = 4; tel['i'] = 4;
	tel['J'] = 5; tel['j'] = 5; tel['K'] = 5; tel['k'] = 5; tel['L'] = 5; tel['l'] = 5;
	tel['M'] = 6; tel['m'] = 6; tel['N'] = 6; tel['n'] = 6; tel['O'] = 6; tel['o'] = 6;
	tel['P'] = 7; tel['p'] = 7; tel['Q'] = 7; tel['q'] = 7; tel['R'] = 7; tel['r'] = 7; tel['S'] = 7; tel['s'] = 7;
	tel['T'] = 8; tel['t'] = 8; tel['U'] = 8; tel['u'] = 8; tel['V'] = 8; tel['v'] = 8;
	tel['W'] = 9; tel['w'] = 9; tel['X'] = 9; tel['x'] = 9; tel['Y'] = 9; tel['y'] = 9; tel['Z'] = 9; tel['z'] = 9;

	while(gets(n))
	{
		int len = strlen(n);

		for (int i = 0; i < len; i++)
		{
			if (isdigit(n[i]))
				printf("%c", n[i]);
			else if (n[i] == '*' or n[i] == '#')
				printf("%c", n[i]);
			else if ((n[i] >= 'a' and n[i] <= 'z') or (n[i] >= 'A' and n[i] <= 'Z'))
				printf("%d", tel[n[i]]);
		}
		
		printf("\n");
	}
		
	return 0;
}
