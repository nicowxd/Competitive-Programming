// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Arredondamento por Valor ...
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1305

#include <string>
#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
	string num, cutoff;
	double n, c;
	while(cin >> num >> cutoff)
	{
		n = stod(num);
		c = stod(cutoff);
		if (n - (int) n <= c)
			cout << int(floor(n)) << endl;	
	       	else                                   
	       		cout << int(ceil(n)) << endl;
	}
	return 0;
}	
		
