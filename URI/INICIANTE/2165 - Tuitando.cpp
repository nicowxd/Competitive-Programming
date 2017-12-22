// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Tuitando
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2165

#include <bits/stdc++.h>

using namespace std;

int main()
{

	string t;
	getline(cin, t);
	
	if ((int) t.size() > 140)
		printf("MUTE\n");
	else
		printf("TWEET\n");

	return 0;
}
