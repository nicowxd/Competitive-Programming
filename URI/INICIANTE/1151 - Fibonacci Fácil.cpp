// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Fibonacci Fácil
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1151

#include <iostream>
using namespace std;

int main()
{
	int x, a=0,b=1,c=1;
	cin >> x;
	if (x == 1)
	{
		cout << a << endl;
		return 0;
	}
	else
	{
		cout << a << " ";
	}
	if (x == 2)
	{
		cout << b << endl;
		return 0;
	}
	else
{
	for(int i=2;i<=x;i++)
	{
		if (i==x)
		{
			cout << c << endl;
			return 0;
		}
		cout << c << " ";
		c = a + b;
		a = b;
		b = c;
	}
}
	return 0;
}


