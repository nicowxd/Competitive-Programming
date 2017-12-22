// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Cigarras Periódicas
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2660

#include <bits/stdc++.h>

using namespace std;

int lcm(int a, int b)
{
	return a * (b/__gcd(a, b));
}

int main()
{

	int n, l, a, b;
	scanf("%d %d", &n, &l);

	scanf("%d %d", &a, &b);
	int ans = lcm(a, b);

	for (int i = 2; i < n; i++)
	{
		scanf("%d", &a);
		ans = lcm(ans, a);
	}

	int div = l/ans;
	int mult = ans*div;

	int k = 1;
	while(lcm(k, ans) != mult)
		k++;

	printf("%d\n", k);
	return 0;
}
