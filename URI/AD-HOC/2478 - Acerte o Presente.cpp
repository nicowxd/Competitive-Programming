// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Acerte o Presente
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2478

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;	
	while(scanf("%d", &n) != EOF)	
	{
		map< pair<string, string> , int> pres;
		pair<string, string> k;
		string nome, p;
		for (int i = 0; i < n; i++)
		{
			cin >> nome;
			for (int j = 0; j < 3; j++)
			{
				cin >> p;
				k = make_pair(nome, p);	
				pres[k] = j;
			}
		}
		
		while(cin >> nome >> p)
		{
			if (pres.find(make_pair(nome,p)) == pres.end())
				printf("Tente Novamente!\n");
			else
				printf("Uhul! Seu amigo secreto vai adorar o/\n");
		}
	}
	return 0;
}
