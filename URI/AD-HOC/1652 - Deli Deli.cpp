// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Deli Deli
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1652

#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

bool isVogal(char s)
{
	if (s == 'a' or s == 'e' or s == 'i' or s == 'o' or s == 'u')
		return true;
	return false;
}

string plural(string pala)
{
	int tam = pala.length();
	int c = tam-1;
	if (pala[c] == 'y' && (tam > 1 && !isVogal(pala[c-1])))
	{
		pala[c] = 'i';
		return pala + "es";
	}
	else if (pala[c] == 'o' or pala[c] == 's' or pala[c] == 'x' or (tam > 1 && (pala.substr(c-1, 2) == "ch" or pala.substr(c-1, 2) == "sh")))
	{
		return pala + "es";
	}
	else
		return pala + 's';
}


int main()
{
	map<string, string> irre;
	int l, n;
	string a, b, palavra;
	scanf("%d %d", &l, &n);
	while(l--)
	{
		cin >> a >> b;
		irre[a] = b;
	}
	while(n--)
	{
		cin >> palavra;
		if (irre.find(palavra) != irre.end())
			cout << irre[palavra] << endl;
		else
			cout << plural(palavra) << endl;
	}
	return 0;
}
	


