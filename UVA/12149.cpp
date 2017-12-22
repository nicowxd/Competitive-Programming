#include <bits/stdc++.h>

using namespace std;

int main()
{

	
	int n, v[101];
	v[1] = 1;

	for (int i = 2; i <= 100; i++)
		v[i] = v[i-1] + i*i;

	while(scanf("%d", &n) && n)
		printf("%d\n", v[n]);

	return 0;
}
