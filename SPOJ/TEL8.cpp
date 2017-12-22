#include <bits/stdc++.h>

using namespace std;

int main()
{

	map<char, int> tel;
	tel['A'] = 2, tel['B'] = 2, tel['C'] = 2;
	tel['D'] = 3, tel['E'] = 3, tel['F'] = 3;
	tel['G'] = 4, tel['H'] = 4, tel['I'] = 4;
	tel['J'] = 5, tel['K'] = 5, tel['L'] = 5;
	tel['M'] = 6, tel['N'] = 6, tel['O'] = 6;
	tel['P'] = 7, tel['Q'] = 7, tel['R'] = 7, tel['S'] = 7;
	tel['T'] = 8, tel['U'] = 8, tel['V'] = 8;
	tel['W'] = 9, tel['X'] = 9, tel['Y'] = 9, tel['Z'] = 9;
	
	char nm[40];
	scanf("%s", nm);
	
	int len = strlen(nm);
	for (int i = 0; i < len; i++)
	{
		if (tel.find(nm[i]) != tel.end())
			cout << tel[nm[i]];
		else
			cout << nm[i];
	}
	printf("\n");

	return 0;
}
