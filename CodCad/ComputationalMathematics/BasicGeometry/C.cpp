#include <bits/stdc++.h>

using namespace std;

int main()
{

	int v[3];
	scanf("%d %d %d", &v[0], &v[1], &v[2]);

	sort(v, v+3);

	if (v[0] + v[1] <= v[2])
		printf("n\n");
	else if (v[2]*v[2] < v[0]*v[0] + v[1]*v[1])
		printf("a\n");
	else if (v[2]*v[2] > v[0]*v[0] + v[1]*v[1])
		printf("o\n");
	else
		printf("r\n");
	return 0;
}
