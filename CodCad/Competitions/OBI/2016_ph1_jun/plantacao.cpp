#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if (a*b > c*d)
		printf("%d\n", a*b);
	else
		printf("%d\n", c*d);
	return 0;
}
