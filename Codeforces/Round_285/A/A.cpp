#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	int misha = max((3*a)/10, a - (a/250)*c);
	int vasya = max((3*b)/10, b - (b/250)*d);

	if (misha > vasya)
		printf("Misha\n");
	else if (misha < vasya)
		printf("Vasya\n");
	else
		printf("Tie\n");
	return 0;
}
