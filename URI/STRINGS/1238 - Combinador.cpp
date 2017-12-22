// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Combinador
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1238

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int x,atam,btam,mintam;
	string a,b,c;
	scanf("%d", &x);
	while(x--)
	{
		c = "";
		cin >> a >> b;
		atam = a.length();
		btam = b.length();
		mintam = min(atam, btam);

		for (int i = 0; i < mintam; i++)
		{
			c = c + a[i] + b[i];
		}
		
		if (atam > btam)
		{
			c = c + a.substr(mintam, atam-mintam);
		}
		else
		{
			c = c + b.substr(mintam, btam-mintam);
		}
		
		cout << c << endl;
	}
	return 0;
}		

