// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Salário com Bônus
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1009

#include <iostream>
#include <string>
using namespace std;

int main() {
	string nome;
	double sal, vendas, total;
	getline(cin, nome);
	cin >> sal;
	cin >> vendas;
	total = sal + vendas*0.15;
	cout.precision(2);
	cout << "TOTAL = R$ " << fixed << total << endl;
	return 0;
}

