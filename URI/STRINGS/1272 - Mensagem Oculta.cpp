// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Mensagem Oculta
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1272

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	string text;
	char frase[55], *p;
	vector<string> msg;
	scanf("%d", &n);
	cin.get();
	while(n--)
	{
		msg.clear();
		string code = "";
		gets(frase);
		for (p = strtok(frase, " "); p; p = strtok(NULL, " "))
		{
			msg.push_back(p);
		}
		for (int i = 0; i < (int) msg.size(); i++)
		{
			cout << msg[i][0];
		}
		printf("\n");
	}
	return 0;
}

