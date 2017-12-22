// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Menor e Posição
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1180

#include <iostream>

using namespace std;

int main()
{
	int x,menor=0,pos=0;
	cin >> x;
	int vec[x];
	for (int i=0;i < x ; i++)
	{
		cin >> vec[i];
		if(vec[i] < menor)
		{
			menor = vec[i];
			pos = i;
		}
	}
	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << pos << endl;
	return 0;
}
