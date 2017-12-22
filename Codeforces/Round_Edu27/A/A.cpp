#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n, v[300];
	scanf("%d", &n);

	for (int i = 0; i < 2*n; i++)
		scanf("%d", v+i);

	sort(v, v+(2*n));

	if (v[n] > v[n-1])
		puts("YES");
	else
		puts("NO");
	return 0;
}
