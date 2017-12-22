// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Ordenando a Lista de Cria...
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2479

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, sim = 0, nao = 0;
	char op;
	string l;
	vector<string> cr;

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		cin >> op >> l;
		cr.push_back(l);
		if (op == '+')
			sim++;
		else
			nao++;
	}

	sort(cr.begin(), cr.end());
	
	for (int i = 0; i < n; i++)
		cout << cr[i] << endl;
	printf("Se comportaram: %d | Nao se comportaram: %d\n", sim, nao);

	return 0;
}
