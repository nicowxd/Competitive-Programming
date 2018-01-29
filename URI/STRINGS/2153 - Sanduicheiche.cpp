#include <bits/stdc++.h>

using namespace std;

const int MAXN = 50;

int z[MAXN], len;
char s[MAXN];

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
	
	while(scanf("%s", s) != EOF)
	{
		len = strlen(s);
		
		reverse(s, s + len);
		z_func();
		
		int ans = 0;

		for (int i = 1; i < len; i++)
		{
			if (z[i] != 0 and i - z[i] <= 0)
			{
				ans = i;
				break;
			}
		}
		
		reverse(s, s + len);

		if (ans == 0)
			printf("%s", s);
		else
		{
			for (int i = 0; i < len-ans; i++)
				printf("%c", s[i]);
		}
		printf("\n");
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
