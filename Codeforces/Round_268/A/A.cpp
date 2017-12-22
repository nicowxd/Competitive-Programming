#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, p, q, fase;
	set<int> ans;
	scanf("%d", &n);
	scanf("%d", &p);
	while(p--)
	{
		scanf("%d", &fase);
		ans.insert(fase);
	}
	scanf("%d", &q);
	while(q--)
	{
		scanf("%d", &fase);
		ans.insert(fase);
	}

	if (ans.size() == n)
		printf("I become the guy.\n");
	else
		printf("Oh, my keyboard!\n");
	return 0;
}
