// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: O Maior
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1013

#include <iostream>
using namespace std;

int main() {
	int a,b,c,m;
	cin >> a >> b >> c;
	if (a > b && a > c)
	{
		m = a;
	}
	else if (b > a && b > c)
	{
		m = b;
	}
	else
	{
		m = c;
	}
	cout << m << " eh o maior" << endl;
	return 0;
}
