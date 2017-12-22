#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	scanf("%d", &t);

	while(t--)
	{
		int n, p, v[21];
		bool fail = true;
		scanf("%d %d", &p, &n);

		for (int i = 0; i < n; i++)
			scanf("%d", v+i);
		
		for (int i = 0; i < (1 << n) and fail; i++)
		{
			int sum = 0;
			for (int j = 0; j < n; j++)
				if (i & (1 << j))
					sum += v[j];
		
			if (sum == p)
				fail = false;
		}

		if (!fail)
			puts("YES");
		else
			puts("NO");
	}
	
	return 0;
}
