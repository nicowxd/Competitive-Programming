// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Dividindo X por Y
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1116

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int x,y,z;
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		cin >> y >> z;
		if (z == 0)
		{
		cout << "divisao impossivel" << endl;
		}
		else
		{
		printf("%.1f\n", (float)y/z);
		}            
	}
	return 0;
}
