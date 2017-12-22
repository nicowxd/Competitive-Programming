// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Área
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1012

#include <iostream>
using namespace std;

int main() {
	double pi=3.14159,A,B,C,tri,cir,tra,qua,ret;
	cin >> A >> B >> C;
	tri = (A*C/2.0);
	cir = pi*C*C;
	tra = ((A+B)*C)/2.0;
	qua = B*B;
	ret = A*B;
	cout.precision(3);
	cout << "TRIANGULO: " << fixed << tri << endl;
	cout << "CIRCULO: " << fixed << cir << endl;
	cout << "TRAPEZIO: " << fixed << tra << endl;
	cout << "QUADRADO: " << fixed << qua << endl;
	cout << "RETANGULO: " << fixed << ret << endl;
	return 0;
}
