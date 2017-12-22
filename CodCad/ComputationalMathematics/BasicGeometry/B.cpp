#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, x1, y1, x2, y2, ans = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		int sum = abs(x1-x2)*abs(x1-x2) + abs(y1-y2)*abs(y1-y2);
		ans += sum;
	}

	printf("%d\n", ans);
	return 0;
}
