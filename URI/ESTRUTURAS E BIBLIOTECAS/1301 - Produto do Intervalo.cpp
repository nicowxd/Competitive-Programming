// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Produto do Intervalo
// Nível: 5
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1301

#include <bits/stdc++.h>

using namespace std;

const int MAXN = 123456;

int n, v[MAXN];
vector<char> st;

int left(int p)
{
	return (p << 1);
}

int right(int p)
{
	return (p << 1)+1;
}

void build(int p, int L, int R)
{
	if (L == R)
		v[L] == 0 ? st[p] = '0' : v[L] > 0 ? st[p] = '+' : st[p] = '-';
	else
	{
		build(left(p), L, (L+R)/2);
		build(right(p), (L+R)/2+1, R);

		char p1 = st[left(p)], p2 = st[right(p)];
		if (p1 == '0' or p2 == '0')
			st[p] = '0';
		else if ((p1 == '+' and p2 == '+') or (p1 == '-' and p2 == '-'))
			st[p] = '+';
		else
			st[p] = '-';
	}
}

char query(int p, int L, int R, int i, int j)
{
	if (L >= i and R <= j)
		return st[p];
	if (i > R or j < L)
		return '+';
	
	char p1 = query(left(p), L, (L+R)/2, i, j);
	char p2 = query(right(p), (L+R)/2+1, R, i, j);
	
	if (p1 == '0' or p2 == '0')
		return '0';
	else if ((p1 == '+' and p2 == '+') or (p1 == '-' and p2 == '-'))
		return '+';
	else
		return '-';
}

char update(int p, int L, int R, int idx, int value)
{
	int i = idx, j = idx;
	
	if (i > R or j < L)
		return st[p];
	
	if (L == i and R == i)
	{
		v[i] = value;
		return v[i] == 0 ? st[p] = '0' : v[i] > 0 ? st[p] = '+' : st[p] = '-';
	}

	char p1 = update(left(p), L, (L+R)/2, idx, value);
	char p2 = update(right(p), (L+R)/2+1, R, idx, value);

	if (p1 == '0' or p2 == '0')
		return st[p] = '0';
	else if ((p1 == '+' and p2 == '+') or (p1 == '-' and p2 == '-'))
		return st[p] = '+';
	else
		return st[p] = '-';
}

int main()
{

	int k;
	while(scanf("%d %d", &n, &k) != EOF)
	{
		int x, y;
		char op;
		for (int i = 0; i < n; i++)
			scanf("%d", v+i);
		
		st.assign(4*n, '0');
		build(1, 0, n-1);

		for (int i = 0; i < k; i++)
		{
			getchar();
			scanf("%c %d %d",  &op, &x, &y);
			if (op == 'C')
				update(1, 0, n-1, x-1, y);
			else
				printf("%c", query(1, 0, n-1, x-1, y-1));
		}
		printf("\n");
	}

	return 0;
}
