// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Cálculo Simples
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1010

#include <iostream>
using namespace std;

int main() {
	int cod1,cod2,num1,num2;
	float val1,val2,total;
	cin >> cod1 >> num1 >> val1;
	cin >> cod2 >> num2 >> val2;
	total = num1*val1 + num2*val2;
	cout.precision(2);
	cout << "VALOR A PAGAR: R$ " << fixed << total << endl;
	return 0;
}

