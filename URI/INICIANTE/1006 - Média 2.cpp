// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Média 2
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1006

#include <iostream>
using namespace std;

int main() {
	double a,b,c,media;
	cin >> a;
	cin >> b;
	cin >> c;
	media = (2.0*a + 3.0*b + 5.0*c)/10;
	cout.precision(1);
	cout << "MEDIA = " << fixed << media << endl;
	return 0;
}

