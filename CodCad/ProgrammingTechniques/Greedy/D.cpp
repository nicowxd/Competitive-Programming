#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	pair<int, int> b[123456];
	scanf("%d", &n);
		
	for (int i = 0; i < n; i++)
		cin >> b[i].second >> b[i].first;

	sort(b, b+n);

	int s = 0, ans = 0;
	for (int i = 0; i < n; i++)
	{
		int at = max(0, s + b[i].second - b[i].first);

		if (at > ans)
			ans = at;
		s += b[i].second;
	}

	printf("%d\n", ans);

	return 0;
}
