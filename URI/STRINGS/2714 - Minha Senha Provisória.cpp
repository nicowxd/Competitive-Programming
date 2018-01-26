#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	string s;

	scanf("%d ", &n);

	while(n--)
	{
		cin >> s;
		
		if (s[0] == 'R' and s[1] == 'A' and s.size() == 20)
		{
			int idx = 19;
			long long ans = 0, p = 1;
			
			while(idx > 1)
			{
				ans += (s[idx]-'0')*p;
				p *= 10LL;
				idx--;
			}

			cout << ans << endl;

		}
		else
			puts("INVALID DATA");
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
