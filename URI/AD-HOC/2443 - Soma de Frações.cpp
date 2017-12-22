// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Soma de Frações
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2443

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b)
{
	return a * (b/gcd(a, b));
}

int main()
{

	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	int den = lcm(b, d);
	int num = (den/b)*a + (den/d)*c;

	int ans = gcd(num, den);

	printf("%d %d\n", num/ans, den/ans);
	return 0;
}
