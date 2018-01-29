#include <bits/stdc++.h>

using namespace std;

const int MAXN = 110;

char s[MAXN];
int z[MAXN], len;

void z_func()
{
	memset(z, 0, sizeof z);
	for (int i = 1, l = 0, r = 0; i < len; i++)
	{
		if (i <= r)
			z[i] = min(z[i-l], r - i + 1);
		while(i + z[i] < len && s[z[i]] == s[i + z[i]])
			z[i]++;
		if (i + z[i] - 1 > r)
			l = i, r = i + z[i] - 1;
	}
}

int main()
{

	int n;
	scanf("%d", &n);

	while(n--)
	{
		getchar();
		scanf("%s", s);
		
		len = strlen(s);
		z_func();

		int ans = strlen(s);
		
		for (int i = 1; i < len; i++)
		{
			if (len % i == 0 and i + z[i] == len)
			{
				ans = i;
				break;
			}
		}

		printf("%d\n", ans);
		if (n)
			printf("\n");
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
