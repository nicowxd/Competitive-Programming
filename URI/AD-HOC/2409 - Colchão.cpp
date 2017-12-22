// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Colchão
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2409

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, b, c, h, l;
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d %d", &h, &l);

	if (h > l)
		swap(h, l);

	int x = min(a, min(b, c));
	int y = min(max(a, b), min(max(a,c), max(b,c)));

	if (h >= x and l >= y)
		printf("S\n");
	else
		printf("N\n");
	return 0;
}
