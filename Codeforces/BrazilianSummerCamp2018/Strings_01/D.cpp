#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 10;

int z[MAXN], len;
char s[MAXN];

int main()
{
	
	scanf("%s", s);

	len = strlen(s);
	
	for (int i = 1, l = 0, r = 0; i < len; i++)
	{
		if (i <= r)
			z[i] = min(z[i-l], r - i + 1);
		while(i + z[i] < len && s[z[i]] == s[i + z[i]])
			z[i]++;
		if (i + z[i] - 1 > r)
			l = i, r = i + z[i] - 1;
	}

	for (int i = 0; i < len; i++)
		printf("%d ", z[i]);
	printf("\n");

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
