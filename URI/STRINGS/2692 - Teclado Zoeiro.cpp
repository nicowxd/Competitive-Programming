#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n, m;
	char a, b, c[27], str[500];
	unordered_map<char, char> ans;
	
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		scanf(" %c %c", &a, &b);
		ans[a] = b;
		ans[b] = a;
	}

	for (int i = 0; i < m; i++)
	{
		scanf(" %[^\n]s", str);
		
		int len = strlen(str);

		for (int j = 0; j < len; j++)
		{
			if (ans.count(str[j]))
				printf("%c", ans[str[j]]);
			else
				printf("%c", str[j]);
		}
		printf("\n");
	}
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
