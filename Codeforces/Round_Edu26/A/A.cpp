#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	char str[220], *p;

	scanf("%d%*c", &n);

	gets(str);

	int ans = 0;
	for (p = strtok(str, " "); p; p = strtok(NULL, " "))
	{
		int up = 0;
		for (int i = 0; i < strlen(p); i++)
		{
			if (isupper(p[i]))
				up++;
		}
		ans = max(ans, up);
	}

	printf("%d\n", ans);
	return 0;
}
