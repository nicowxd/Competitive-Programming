// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Pares, Ímpares, Positivos...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1066

#include <iostream>

using namespace std;

int main()
{
	int vec[5],par=0,impar=0,pos=0,neg=0;
	for (int i=0; i<5 ; i++)
	{
		cin >> vec[i];
		if (vec[i] % 2 == 0)
		{
		par++;
		}
		if (vec[i] % 2 != 0)
		{
		impar++;
		}
		if (vec[i] > 0)
		{
		pos++;
		}
		if (vec[i] < 0)
		{
		neg++;
		}
	}
	cout << par << " valor(es) par(es)" << endl;
	cout << impar << " valor(es) impar(es)" << endl;
	cout << pos << " valor(es) positivo(s)" << endl;
	cout << neg << " valor(es) negativo(s)" << endl;
	return 0;
}
		
