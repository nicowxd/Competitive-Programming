// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Torres de Hanói
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2251

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int c = 1;
	long long n;
	while(scanf("%lld", &n), n)
	{
		printf("Teste %d\n", c++);
		long long ans = pow(2, n) - 1LL;
		printf("%lld\n\n", ans);
	}
	return 0;
}
