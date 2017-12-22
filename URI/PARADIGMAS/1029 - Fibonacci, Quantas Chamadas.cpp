// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Fibonacci, Quantas Chamadas?
// Nível: 2
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1029

#include <bits/stdc++.h>

using namespace std;

int memo[50], cnt;

int fib(int x)
{
	cnt++;
	if (x == 0)
		return 0;
	if (x == 1)
		return 1;

	memo[x] = (fib(x-1) + fib(x-2));

	return memo[x];
}

int main()
{

	int n, x;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d", &x);
		cnt = 0;
		int ans = fib(x);
		printf("fib(%d) = %d calls = %d\n", x, cnt-1, memo[x]);
	}

	return 0;
}
