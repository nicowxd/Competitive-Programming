#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, mat[510][510] = {0};
	
	scanf("%d", &n);
	
	bool ok = false;
	int x, y;

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		if (mat[x][y] == 1)
			ok = true;
		else
			mat[x][y] = 1;
	}

	if (ok)
		puts("1");
	else
		puts("0");

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
