// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Lanche
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1038

#include <iostream>

using namespace std;

int main()
{
	int cod;
	float qty;
	cin >> cod >> qty;
	if (cod == 1)
	{
		cout.precision(2);
		cout << "Total: R$ " << fixed << 4*qty << endl;
		return 0;
	}
	if (cod == 2)
	{
		cout.precision(2);
		cout << "Total: R$ " << fixed << 4.5*qty << endl;
		return 0;
	}
	if (cod == 3)
	{
		cout.precision(2);
		cout << "Total: R$ " << fixed << 5*qty << endl;
		return 0;
	}
	if (cod == 4)
	{
		cout.precision(2);
		cout << "Total: R$ " << fixed << 2*qty << endl;
		return 0;
	}
	if (cod == 5)
	{
		cout.precision(2);
		cout << "Total: R$ " << fixed << 1.5*qty << endl;
		return 0;
	}
	return 0;
}
