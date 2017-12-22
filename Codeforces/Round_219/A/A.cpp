#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, x, v[10] = {0};
	char p;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%c", &p);
			if (p != '.')
				v[p-'0']++;
		}
		getchar();
	}

	
	for (int i = 0; i < 10; i++)
	{
		if (v[i] > 2*n)
		{
			puts("NO");
			return 0;
		}
	}

	puts("YES");
	return 0;
}
