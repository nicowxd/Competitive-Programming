#include <cstdio>

using namespace std;

int main()
{

	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if (a == (b + c + d) and (b + c) == d and b == c)
		printf("S\n");
	else
		printf("N\n");
	return 0;
}
