// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Cifra de César
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1253

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	int x,y;
	string msg;
	scanf("%d", &x);
	cin.get();
	for (int i = 0; i < x; i++)
	{
		cin >> msg >> y;
		for (int j = 0; j < msg.length(); j++)
		{
			msg[j] = (msg[j] - y);
			if (msg[j] < 'A')
				msg[j]+= 26;
			
		}
		cout << msg << endl;
	}
	return 0;
}


