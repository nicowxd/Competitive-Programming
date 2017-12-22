// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Maior e Posição
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1080

#include <iostream>
using namespace std;

int main() {
	int y,h=0,z;
	for (int x=0;x < 100; x++)
	{
		cin >> y;
		if (h < y)
		{
			h = y;
			z = x+1;
		}
	}
	cout << h << endl;
	cout << z << endl;
	return 0;
}

