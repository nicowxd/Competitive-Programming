#include <bits/stdc++.h>

using namespace std;

int main()
{

	int s, v1, v2, t1, t2;
	scanf("%d %d %d %d %d", &s, &v1, &v2, &t1, &t2);

	int ans1 = s*v1 + 2*t1;
	int ans2 = s*v2 + 2*t2;

	if (ans1 < ans2)
		printf("First\n");
	else if (ans1 > ans2)
		printf("Second\n");
	else
		printf("Friendship\n");
	return 0;
}
