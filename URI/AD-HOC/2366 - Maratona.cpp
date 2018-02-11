#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m;
	scanf("%d %d", &n, &m);
	
	int diff, last = 0;
	bool ok = true;

	for (int i = 0, x; i < n; i++)
	{
		scanf("%d", &x);
		diff = x - last;

		if (diff > m)
			ok = false;
		last = x;
	}

	if (ok and last + m >= 42195)
		puts("S");
	else
		puts("N");
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
