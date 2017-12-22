// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Nagol
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2579

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int l, c, x, y;
	scanf("%d %d %d %d", &l, &c, &x, &y);
	
	if (c & 1)
		printf("%s\n", (x+y) & 1 ? "Esquerda" : "Direita");
	else
		printf("%s\n", (y & 1) ? "Esquerda" : "Direita");
	return 0;
}
