// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Alinhamento Lunar
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2514

#include <bits/stdc++.h>

using namespace std;

int lcm(int a, int b)
{
	return a * (b / __gcd(a,b));
}

int main()
{

	int m;
	while(scanf("%d", &m) != EOF)
	{
		int l1, l2, l3;
		scanf("%d %d %d", &l1, &l2, &l3);

		int ans = lcm(l1, lcm(l2, l3));
		printf("%d\n", ans-m);
	}
	return 0;
}
