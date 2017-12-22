#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define MAXN 51

typedef long long ll;

struct matrix
{
	ll mat[MAXN][MAXN];
};

matrix matMult(matrix a, matrix b, int len)
{
	matrix ans;
	
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			ans.mat[i][j] = 0;
			for (int k = 0; k < len; k++)
				ans.mat[i][j] = (ans.mat[i][j] + (a.mat[i][k]*b.mat[k][j])%MOD);
			ans.mat[i][j] %= MOD;
		}
	}

	return ans;
}

matrix matPow(matrix base, ll n, int len)
{
	matrix ans;
	for (int i = 0; i < len; i++)
		for (int j = 0; j < len; j++)
			ans.mat[i][j] = (i == j);
	
	while(n)
	{
		if (n & 1)
			ans = matMult(ans, base, len);
		base = matMult(base, base, len);
		n >>= 1;
	}

	return ans;
}

int main()
{

	int t;
	scanf("%d", &t);

	while(t--)
	{
		int m, n;

		scanf("%d %d", &m, &n);

		matrix base;
		
		for (int i = 0; i < m; i++)
			for (int j = 0; j < m; j++)
				scanf("%lld", &base.mat[i][j]);
		
		matrix ans = matPow(base, n, m);

		for (int i = 0; i < m; i++)
			for (int j = 0; j < m; j++)
				printf("%lld%c", ans.mat[i][j], j == m-1 ? '\n' : ' ');
	}

	return 0;
}
