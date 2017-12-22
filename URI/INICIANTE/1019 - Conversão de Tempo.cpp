// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Conversão de Tempo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1019

#include <iostream>
using namespace std;

int main() {
	int x,w=0,y=0,z=0;
	cin >> x;
	if (x >= 3600)
	{
	   w = x/3600;
	   x = x - w*3600;
	}
	if (x >=60 && x<3600)
	{
		y = x/60;
		x = x - y*60;
	}
	if (x < 60)
	{
		z = x;
	}
	cout << w <<":"<< y << ":" << z << endl;
	return 0;
}
