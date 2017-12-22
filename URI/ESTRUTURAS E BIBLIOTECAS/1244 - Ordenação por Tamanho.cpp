// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Ordenação por Tamanho
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1244

#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b)
{
	return a.size() > b.size();
}

int main()
{
	int n;
	char *p, frase[10010];
	vector<string> token;
	scanf("%d", &n);
	cin.get();
		
	for (int i = 0; i < n; i++)
	{
		token.clear();
		gets(frase);
		for (p = strtok(frase, " "); p; p = strtok(NULL, " "))
			token.push_back(p);
	
		stable_sort(token.begin(), token.end(), cmp);
		
		for (int j = 0; j < (int) token.size(); j++)
		{
			cout << token[j] << ((j != token.size()-1) ? " " : "\n");
		}
	}
	
	return 0;
}	
