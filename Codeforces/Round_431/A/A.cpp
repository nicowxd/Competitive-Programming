#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[110];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", v+i);

	if (n%2 == 0)
		puts("No");
	else
	{
		if (v[0]&1 and v[n-1]&1)
			puts("Yes");
		else
			puts("No");
	}
	return 0;
}
