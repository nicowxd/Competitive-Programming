// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Contando Caracters
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2108

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int ans = 0;
	char frase[105], *p;
	vector<string> ph;	
	string res;
	while(gets(frase))
	{
		if (strcmp(frase, "0") == 0)
			break;
		ph.clear();
		for (p = strtok(frase, " "); p; p = strtok(NULL, " "))
			ph.push_back(p);
		for (int i = 0; i < (int) ph.size(); i++)	
		{
			if ((int) ph[i].size() >= ans)
			{
				ans = (int) ph[i].size();
				res = ph[i];
			}
			printf("%d", (int) ph[i].size());
			if (i != (int) ph.size() - 1)
				printf("-");
			
		}
		printf("\n");
	}
	printf("\n");
	cout << "The biggest word: " << res  << endl;
	return 0;
}
