// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Salário
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1008

#include <iostream>
using namespace std;

int main() {
	int a,b;
	float c, salario;
	cin >> a;
	cin >> b;
	cin >> c;
	salario = b*c;
	cout << "NUMBER = " << a << endl;
	cout.precision(2);
	cout << "SALARY = U$ " << fixed << salario << endl;
	return 0;
}

