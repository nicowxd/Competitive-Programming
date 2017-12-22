// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Amigos do Habay
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2136

#include <bits/stdc++.h>

using namespace std;

typedef struct{
	string nome;
	int id;
}amig;

bool cmp(amig a, amig b)
{
	if (a.nome.size() != b.nome.size())
		return a.nome.size() > b.nome.size();
	else
		return a.id < b.id;
}

int main()
{
	int n = 0;
	string a, b;
	amig amigos[501];
	set<string> sim;
	set<string> no;
	set<string>::iterator it;
	int i = 0;
	while(cin >> a)
	{
		if (a == "FIM")
			break;
		cin >> b;
		if (b == "YES")
		{
			sim.insert(a);
			amigos[n].id = i;
			amigos[n].nome = a;
			n++;
		}
		else
			no.insert(a);
	
		i++;
	}

	sort(amigos, amigos+n, cmp);
	
	for (it = sim.begin(); it != sim.end(); it++)
		cout << *it << "\n";
	for (it = no.begin(); it != no.end(); it++)
		cout << *it << "\n";
	printf("\n");
	printf("Amigo do Habay:\n");
	printf("%s\n", amigos[0].nome.c_str());

	return 0;
}
