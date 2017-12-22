#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, a, b, c, d, e, f, g;
	scanf("%d", &n);
	scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);

	int total = d + e + f + (a-d-e) + (b-d-f) + (c-e-f) + g;
	if (total > n)
		printf("S\n");
	else
		printf("N\n");
	return 0;
}
