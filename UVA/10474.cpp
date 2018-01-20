#include <bits/stdc++.h>

using namespace std;

int v[1123456];

int binarySearch(int lo, int hi, int num)
{
	while(lo <= hi)
	{
		int mid = lo + (hi-lo)/2;
		
		if (v[mid] == num)
		{
			if (v[mid-1] != num)
				return mid;
		}
		if (v[mid] < num)
			lo = mid + 1;
		else
			hi = mid - 1;
	}

	return -1;
}

int main()
{

	int n, q, caso = 1;

	while(scanf("%d %d", &n, &q), (n or q))
	{
		memset(v, 0, sizeof v);
		for (int i = 0; i < n; i++)
			scanf("%d", v+i);

		sort(v, v+n);
		
		printf("CASE# %d:\n", caso++);
		for (int i = 0, foo; i < q; i++)
		{
			scanf("%d", &foo);

			int lo = 0, hi = n-1, ans;
			
			ans = binarySearch(lo, hi, foo);

			if (ans == -1)
				printf("%d not found\n", foo);
			else
				printf("%d found at %d\n", foo, ans+1);
		}
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
