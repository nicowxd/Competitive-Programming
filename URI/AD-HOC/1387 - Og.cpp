// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Og
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1387

#include <iostream>

using namespace std;

int main()
{
	int x, y;
	while (cin >> x >> y)
	{
		if (x==0 & y==0)
		{
			return 0;
		}
		cout << x+y << endl;
	}
	return 0;
} 
