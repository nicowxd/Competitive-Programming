// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Divisibilidade Por 3
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1987

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	int n, ans;
	ll m;
	while(scanf("%d %lld", &n, &m) != EOF)
	{
		ans = 0;
		while(m)
		{
			ans+= m%10;
			m/=10;
		}
		printf("%d ", ans);
		if (ans % 3 == 0)
			printf("sim\n");
		else
			printf("nao\n");
	}
	return 0;
}

