// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Lavanderia
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1794

//============================================================================
// Name        : URI_Lavanderia.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int x, la,lb,sa,sb;
	cin >> x >> la >> lb >> sa >> sb;
	if (la <= x  && x <= lb && sa <= x && x <= sb)
	{
		cout << "possivel" << endl;
	}
	else
	{
		cout << "impossivel" << endl;
	}
	return 0;
}

