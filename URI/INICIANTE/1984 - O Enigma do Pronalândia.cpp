// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: O Enigma do Pronalândia
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1984

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	string valor;
	cin >> valor;
	int tam = valor.size();
	for (int i = tam - 1; i >= 0; i--)
	{
	cout << valor[i];
	}
	printf("\n");
	return 0;
}
