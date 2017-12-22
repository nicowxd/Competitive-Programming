#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[8] = {0};
	scanf("%d", &n);

	for (int i = 0, x; i < n; i++)
	{
		scanf("%d", &x);
		v[x]++;
	}
	
	if (v[1] != n/3 or v[7] or v[5])
	{
		puts("-1");
		return 0;
	}
	else
	{
		int qty = v[6] - v[3];
		if (v[2] != qty + v[4] or qty < 0)
		{
			puts("-1");
			return 0;
		}
		else
		{
			for (; v[4] > 0; v[4]--, v[2]--)
				puts("1 2 4");
			for (; v[2] > 0; v[2]--, v[6]--)
				puts("1 2 6");
			for (; v[3] and v[6]; v[3]--, v[6]--)
				puts("1 3 6");
		}
	}

	return 0;
}
