// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Triângulo Trinomial
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1795

//============================================================================
// Name        : URI_Triangulo_Trinomial.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	unsigned int x;
	cin >> x;
	if (x == 0)
	{
		cout << "1" << endl;
		return 0;
	}
	else
	{
		x = pow(3,x);
		cout << x << endl;
	}
	return 0;
}

