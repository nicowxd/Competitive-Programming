#include <bits/stdc++.h>

using namespace std;

int main()
{

	int l, r, d;
	scanf("%d %d %d", &l, &r, &d);

	if (r > 50 and l < r and r > d)
		printf("S\n");
	else
		printf("N\n");

	return 0;
}
