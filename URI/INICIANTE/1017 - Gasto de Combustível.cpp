// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Gasto de Combustível
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1017

#include <iostream>
using namespace std;

int main() {
	int x,y,km;
	float kml;
	cin >> x;
	cin >> y;
	km = y*x;
	kml = (km/12.0);
	cout.precision(3);
	cout << fixed << kml << endl;
	return 0;
}
