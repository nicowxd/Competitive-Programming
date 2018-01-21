#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	string s;
	scanf("%d ", &n);

	while(n--)
	{
		int k, v[25], i = 1, sum = 0;
		bool memo[30][210];

		getline(cin, s);
		stringstream ss(s);

		while(ss >> k)
		{
			v[i++] = k;
			sum += k;
		}

		if (sum&1)
			puts("NO");
		else
		{
			int ans = sum / 2;

			for (int j = 1; j <= sum; j++)
				memo[0][j] = 0;
			for (int j = 0; j < i; j++)
				memo[j][0] = 1;

			for (int j = 1; j < i; j++)
			{
				for (int k = 1; k <= sum; k++)
				{
					memo[j][k] = memo[j-1][k];
					if (k >= v[j])
						memo[j][k] |= memo[j-1][k-v[j]];
				}
			}

			if (memo[i-1][ans])
				puts("YES");
			else
				puts("NO");
		}
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
