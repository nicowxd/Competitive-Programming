// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Tudo o que Você Precisa é...
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1307

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
	return b == 0 ? a : gcd (b, a % b);
}

int main()
{

	int n;
	scanf("%d%*c", &n);

	for (int c = 1; c <= n; c++)
	{
		string s1, s2;
		cin >> s1 >> s2;

		int x1 = 0, x2 = 0, k = 1;
		for (int i = s1.size()-1; i >= 0; i--)
		{
			if (s1[i] == '1')
				x1 += k;
			k *= 2;
		}
		k = 1;
		for (int i = s2.size()-1; i >= 0; i--)
		{
			if (s2[i] == '1')
				x2 += k;
			k *= 2;
		}

		int ans = gcd(x1, x2);
		if (ans != 1)
			printf("Pair #%d: All you need is love!\n", c);
		else
			printf("Pair #%d: Love is not all you need!\n", c);
	}
	return 0;
}
