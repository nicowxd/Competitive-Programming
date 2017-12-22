#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n,v[123456];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", v+i);
	
	int ans = v[0];
	for (int i = 1; i < n; i++)
		ans|= v[i];

	printf("%d\n", ans);
	return 0;
}
