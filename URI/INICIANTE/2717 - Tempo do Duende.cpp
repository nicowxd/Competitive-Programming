// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Tempo do Duende
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2717

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, a, b;
	scanf("%d", &n);

	scanf("%d %d", &a, &b);

	if (a + b <= n)
		puts("Farei hoje!");
	else
		puts("Deixa para amanha!");

	return 0;
}
