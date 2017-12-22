// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Feedback
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1546

#include <iostream>
using namespace std;

int main() {

	int x,y,m1,m2,m3,m4;
	cin >> x;
	for (int i = 0; i < x ; i++)
	{
		cin >> y;
		for (int j = 0; j < y; j++)
		{
			cin >> m1;
			if (m1 == 1)
			{
				cout << "Rolien" << endl;
			}
			if (m1 == 2)
			{
				cout << "Naej" << endl;
			}
			if (m1 == 3)
			{
				cout << "Elehcim" << endl;
			}
			if (m1 == 4)
			{
				cout << "Odranoel" << endl;
 			}
		}
	}


	return 0;
}

