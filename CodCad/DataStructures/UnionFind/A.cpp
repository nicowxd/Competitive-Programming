#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100100;

int p[MAXN], r[MAXN];

int findSet(int i)
{
	return (p[i] == i) ? i : (p[i] = findSet(p[i]));
}

bool isSameSet(int a, int b)
{
	return findSet(a) == findSet(b);
}

void unionSet(int a, int b)
{
	if (!isSameSet(a, b))
	{
		int x = findSet(a);
		int y = findSet(b);
		
		if (r[x] > r[y])
			p[y] = x;
		else
		{
			p[x] = y;
			if (r[x] == r[y])
				r[y]++;
		}
	}
}

int main()
{

	int n, k;
	char op;
	
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++)
		p[i] = i;

	for (int i = 0; i < k; i++)
	{
		int a, b;
		getchar();
		scanf("%c %d %d", &op, &a, &b);
	
		if (op == 'F')
			unionSet(a-1,b-1);
		else
		{
			if (isSameSet(a-1,b-1))
				printf("S\n");
			else
				printf("N\n");
		}
	}
	return 0;
}
