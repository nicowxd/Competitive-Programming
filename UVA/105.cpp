#include <bits/stdc++.h>

using namespace std;

int main()
{
	int l, h, r, ans[10005] = {0}, maior = 0, menor = 1e9;
	while(scanf("%d %d %d", &l, &h, &r) != EOF)
	{
		for (int i = l; i < r; i++)
		{
			if (h >= ans[i])
				ans[i] = h;
		}
		if (r > maior)
			maior = r;
		if (l < menor)
			menor = l;
	}
	int tmp = ans[menor];
	printf("%d %d", menor, ans[menor]);
	for (int i = menor; i < maior; i++)
	{
		if (tmp != ans[i])
		{
			printf(" %d %d", i, ans[i]);
			tmp = ans[i];
		}
	}
	printf(" %d 0\n", maior);
	return 0;
}
