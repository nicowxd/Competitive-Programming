#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[123456];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", v+i);

	sort(v, v+n);

	int sum = 0, ans;
	
	for (int i = 0; i < n; i++)
	{
		if (sum > v[i])
			ans = i + 1;
		sum += v[i];
	}
	
	printf("%d\n", ans);
		
	return 0;
}
