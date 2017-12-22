// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Idade em Dias
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1020

#include <iostream>
using namespace std;

int main() {
	int x,w=0,y=0,z=0;
	cin >> x;
	if (x >= 365)
	{
		w = x/365;
		x = x - w*365;
	}
	if (x >= 30 && x < 365)
	{
		y = x/30;
		x = x - y*30;
	}
	if (x < 30)
	{
		z = x;
	}
	cout << w << " ano(s)" << endl;
	cout << y << " mes(es)" << endl;
	cout << z << " dia(s)" << endl;
	return 0;
}
