// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Triângulo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1043

#include <iostream>

using namespace std;

int main()
{
	double x,y,z;
	cin >> x >> y >> z;
	if (x < y+z && y < x+z && z < x+y)
	{
		cout.precision(1);
		cout << "Perimetro = " << fixed << x+y+z << endl;
	}
	else
	{
		cout.precision(1);
		cout << "Area = " << fixed << ((x+y)*z)/2 << endl;
	}
	return 0;
}
