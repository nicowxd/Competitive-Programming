#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, k, v[30] = {0};
	bool flag = false;
	char c;
	scanf("%d %d%*c", &n, &k);

	for (int i = 0; i < n; i++)
	{
		scanf("%c", &c);
		v[c-'a']++;
		if (v[c-'a'] > k)
			flag = true;
	}

	if (flag)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}
