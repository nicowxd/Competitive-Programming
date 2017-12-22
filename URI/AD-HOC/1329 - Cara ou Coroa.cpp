// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Cara ou Coroa
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1329

//============================================================================
// Name        : URI_Cara_ou_Coroa.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int x,maria=0,joao=0;
	while (cin >> x)
	{
		if (x == 0)
		{
			return 0;
		}
		else
		{
			int vec[x];
			maria = 0;
			joao = 0;
			for (int i=0; i < x; i++)
				{
					cin >> vec[i];
					if (vec[i] == 0)
					{
						maria += 1;
					}
					if (vec[i] == 1)
					{
						joao += 1;
					}
				}

		}
		cout << "Mary won " << maria << " times and John won " << joao << " times" << endl;
	}
	return 0;
}

