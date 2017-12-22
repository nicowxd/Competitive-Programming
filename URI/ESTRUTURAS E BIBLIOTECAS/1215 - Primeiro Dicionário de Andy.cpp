// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Primeiro Dicionário de Andy
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1215

#include <bits/stdc++.h>

using namespace std;

int main()
{

	string s, buff, k;
	set<string> ans;

	while(getline(cin, s))
	{
		buff = "";
		for (int i = 0; i < (int) s.size(); i++)
		{
			if (isalpha(s[i]))
				buff += s[i];
			else
				buff += " ";
		}
		
		stringstream ss;
		ss << buff;
		while(ss >> k)
		{
			for (int i = 0; i < (int) k.size(); i++)
				k[i] = tolower(k[i]);
			ans.insert(k);
		}
	}

	for (auto it = ans.begin(); it != ans.end(); it++)
		cout << *it << endl;
	return 0;
}
