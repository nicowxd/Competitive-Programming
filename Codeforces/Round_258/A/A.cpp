#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	if (n > m)
		swap(n,m);
	if (n % 2 == 0)
		printf("Malvika\n");
	else
		printf("Akshat\n");
	return 0;
}
