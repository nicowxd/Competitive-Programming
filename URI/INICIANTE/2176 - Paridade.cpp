// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Paridade
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2176

#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s;
	cin >> s;
	
	int um = 0;
	
	for (int i = 0; i < (int) s.size(); i++)
	{
		if (s[i] == '1')
			um++;
	}	
	if (um % 2)
		cout << s << "1\n";
	else
		cout << s << "0\n";
	return 0;
}
