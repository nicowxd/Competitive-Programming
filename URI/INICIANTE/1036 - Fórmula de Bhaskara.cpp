// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Fórmula de Bhaskara
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1036

//============================================================================
// Name        : URI_Formula_de_Bhaskara.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double r1, r2, x,a, b, c;
	cin >> a >> b >> c;
	if (a == 0)
	{
		cout << "Impossivel calcular" << endl;
		return 0;
	}
	else
	{
		x = b*b - 4*a*c;
		if (x < 0)
		{
			cout << "Impossivel calcular" << endl;
			return 0;
		}
		else
		{
			r1 = (-b + sqrt(x)) / (2*a);
			r2 = (-b - sqrt(x)) / (2*a);
			cout.precision(5);
			cout << "R1 = " << fixed << r1 << endl;
			cout << "R2 = " << fixed << r2 << endl;
		}
	}
	return 0;
}

