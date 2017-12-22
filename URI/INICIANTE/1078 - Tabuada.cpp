// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Tabuada
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1078

#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	for(int i= 1; i<= 10; i++)
	{
		cout << i << " x " << x << " = " << i*x << endl;
	}
	return 0;
}
