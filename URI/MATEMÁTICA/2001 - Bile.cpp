// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Bile
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2001

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define MAXN 101
#define MOD 303700049LL

ll ans[101][101], base[101][101];

void matPow(ll n, int len)
{
	for (int i = 0; i < len; i++)
		for (int j = 0; j < len; j++)
			ans[i][j] = (i == j);
	
	ll aux[101][101];

	while(n)
	{
		if (n & 1LL)
		{
			for (int i = 0; i < len; i++)
			{
				for (int j = 0; j < len; j++)
				{
					aux[i][j] = 0;
					for (int k = 0; k < len; k++)
						aux[i][j] = (aux[i][j] + (ans[i][k]*base[k][j]));
					aux[i][j] %= MOD;
				}
			}

			memcpy(ans, aux, sizeof(aux));
		}
			
		for (int i = 0; i < len; i++)
		{
			for (int j = 0; j < len; j++)
			{
				aux[i][j] = 0;
				for (int k = 0; k < len; k++)
					aux[i][j] = (aux[i][j] + (base[i][k] * base[k][j]));
				aux[i][j] %= MOD;
			}
		}
		memcpy(base, aux, sizeof(aux));
		n >>= 1LL;
	}
}

int main()
{

	int n;
	ll k, f[101];

	while(scanf("%d %lld", &n, &k) != EOF)
	{
		f[0] = 0;
		for (int i = n; i >= 1; i--)
		{
			scanf("%lld", &f[i]);
			f[i] %= MOD;
			f[0] += f[i];
		}

		memset(base, 0, sizeof(base));
		
		base[0][0] = 1LL;
		base[1][0] = 0LL;
		//base[2][1] = 1LL;

		for (int i = 1; i <= n; i++)
		{
			base[0][i] = i;
			base[1][i] = i;
			if (i >= 2)
				base[i][i-1] = 1;
		}
		
		matPow(k-n, n+1);
		
		ll fk = 0LL, sk = 0LL;

		for (int i = 0; i <= n; i++)
		{
			fk += (ans[1][i] * f[i]);
			sk += (ans[0][i] * f[i]);
		}

		printf("%lld %lld\n", fk%MOD, sk%MOD);
	}

	return 0;
}
