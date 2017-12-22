// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: System of a Download
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2582

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int c;
	string x[11] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};
	scanf("%d", &c);
		
	while(c--)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		
		cout << x[a+b] << endl;
	}
	return 0;
}
