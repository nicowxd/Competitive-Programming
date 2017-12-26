#include <bits/stdc++.h>

using namespace std;

int main()
{

	int y, k, n;
	vector<int> v;
	scanf("%d %d %d", &y, &k, &n);

	for (int i = 1; i <= n/k; i++)
	{
		if (k*i <= y)
			continue;
		v.push_back((k*i) - y);
	}

	if ((int) v.size() == 0)
		printf("-1");
	else
	{
		printf("%d", v[0]);
		for (int i = 1; i < (int) v.size(); i++)
			printf(" %d", v[i]);
	}
	printf("\n");

	return 0;
}
