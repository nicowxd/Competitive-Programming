#include <bits/stdc++.h>

using namespace std;

int main()
{

	int ia, ib, fa, fb;
	scanf("%d %d %d %d", &ia, &ib, &fa, &fb);

	if (ia == fa and ib == fb)
		printf("0\n");
	else if ((ia != fa and ib != fb) or (ia != fa and ib == fb))
		printf("1\n");
	else
		printf("2\n");
	return 0;
}
