#include <bits/stdc++.h>

using namespace std;

int main()
{

	long long unsigned int x;
	scanf("%llu", &x);

	if (x == 0)
		printf("N\n");
	else if (((x+1ULL) & x) == 0)
		printf("S\n");
	else
		printf("N\n");
	return 0;
}
