#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{

	int n, v[50002];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", v+i);

	int sum = 0, ans = 0;

	for (int i = 0; i < n; i++)
	{
		sum += v[i];
		if (sum < 0)
			sum = 0;
		ans = max(ans, sum);
	}

	printf("%d\n", ans);
	return 0;
}
