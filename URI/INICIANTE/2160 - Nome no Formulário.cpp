// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Nome no Formulário
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2160

#include <bits/stdc++.h>

using namespace std;

int main()
{

	string l;
	getline(cin, l);
	if ((int) l.size() > 80)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}
