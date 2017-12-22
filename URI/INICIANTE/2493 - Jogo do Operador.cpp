// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Jogo do Operador
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2493

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t, x, y, z, idx;
	char ans[101], op;
	string nome;
	set<string> pass;
	set<string>::iterator it;

	while(scanf("%d", &t) != EOF)
	{
		pass.clear();

		for (int i = 0; i < t; i++)
		{
			scanf("%d %d=%d", &x, &y, &z);
		
			if (x + y == z)
				ans[i] = '+';
			else if (x - y == z)
				ans[i] = '-';
			else if (x * y == z)
				ans[i] = '*';
			else
				ans[i] = 'I';
		}
		
		for (int i = 0; i < t; i++)
		{
			cin >> nome >> idx >> op;
			if (ans[idx-1] != op)
				pass.insert(nome);
		}
		
		if ((int) pass.size() == t)
			printf("None Shall Pass!");
		else if ((int) pass.size() == 0)
			printf("You Shall All Pass!");
		else
		{
			it = pass.begin();
			cout << (*it);
			it++;
			for (it; it != pass.end(); it++)
				cout << " " << (*it);
		}
		printf("\n");
	}
	
		
	return 0;
}
