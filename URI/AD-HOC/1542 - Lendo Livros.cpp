// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Lendo Livros
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1542

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int q,d,p,pag;
	while ((cin >> q))
	{
		if (q == 0)
		{
			break;
		}
		else
		{
			cin >> d >> p;
			pag = abs((d*p*q)/(p-q));
			if (pag == 1)
			{
				cout << pag << " pagina" << endl;
			}
			else
			{
				cout << pag << " paginas" << endl;
			}
		}
	}
	return 0;
}
