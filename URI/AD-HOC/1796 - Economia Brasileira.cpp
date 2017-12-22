// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Economia Brasileira
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1796

//============================================================================
// Name        : URI_Economia_Brasileira.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int x,nao=0, sim=0;
	cin >> x;
	int bra[x];
	for (int i = 0; i < x; i++)
	{
		cin >> bra[i];
	}
	for (int i = 0; i < x; i++)
	{
		if (bra[i] == 1)
		{
			nao += 1;
		}
		else
		{
			sim += 1;
		}
	}
	if (sim > nao)
	{
		cout << "Y" << endl;
	}
	else
	{
		cout << "N" << endl;
	}
	return 0;
}

