// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Gangorra
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2455

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int p1, c1, p2, c2;
	scanf("%d %d %d %d", &p1, &c1, &p2, &c2);
	
	if (p1*c1 > p2*c2)
		printf("-1\n");
	else if (p1*c1 < p2*c2)
		printf("1\n");
	else
		printf("0\n");
	return 0;
}
