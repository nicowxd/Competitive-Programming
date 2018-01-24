#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	scanf("%d", &t);

	while(t--)
	{
		int a, b;
		scanf("%dx%d", &a, &b);
		if (a == b)
		{
			for (int i = 5; i <= 10; i++)
				printf("%d x %d = %d\n", a, i, a*i);
		}
		else
		{
			for (int i = 5; i <= 10; i++)
				printf("%d x %d = %d && %d x %d = %d\n", a, i, a*i, b, i, b*i);
		}
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
