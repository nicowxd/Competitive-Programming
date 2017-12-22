// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: A Última Criança Boa
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2023

#include <bits/stdc++.h>

using namespace std;
	
int main()
{

	string nome, ans, tmp, min = "a";
	while(getline(cin, nome))
	{
		tmp = nome;
		for (int i = 0; i < nome.size(); i++)
			nome[i] = tolower(nome[i]);
		if (nome > min)
		{
			min = nome;
			ans = tmp;
		}
	}
	cout << ans << endl;
	return 0;
}
