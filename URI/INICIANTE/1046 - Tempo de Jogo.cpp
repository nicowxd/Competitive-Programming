// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Tempo de Jogo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1046

#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	if (x==24 && y == 0)
	{
	cout << "O JOGO DUROU 24 HORA(S)" << endl;
	return 0;
	}
	if (y <= x)
	{
	cout << "O JOGO DUROU " << (24+y)-x << " HORA(S)" << endl;
	}
	else
	{
	cout << "O JOGO DUROU " << y-x << " HORA(S)" << endl;
	}
	return 0;
}
