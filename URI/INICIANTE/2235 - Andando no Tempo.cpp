// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Andando no Tempo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2235

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	bool ans = false;
	if (a - b == 0)
		ans = true;
	else if (a - c == 0)
		ans = true;
	else if (b - c == 0)
		ans = true;
	else if (a - b - c == 0)
		ans = true;
	else if (a - b + c == 0)
		ans = true;
	else if (a + b - c == 0)
		ans = true;
	
	if (ans)
		printf("S\n");
	else
		printf("N\n");
	return 0;
}
