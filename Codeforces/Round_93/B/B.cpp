#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 10;

string s;
int z[MAXN], n;

void z_func()
{
	for (int i = 1, l = 0, r = 0; i < n; i++)
	{
		if (i <= r)
			z[i] = min(z[i-l], r - i + 1);
		while(i + z[i] < n && s[z[i]] == s[i + z[i]])
			z[i]++;
		if (i + z[i] - 1 > r)
			l = i, r = i + z[i] - 1;
	}
}

int main()
{
	cin >> s;	
	n = (int) s.size();
	z_func();

	int maxv = 0, ans = 0;

	for (int i = 1; i < n; i++)
	{
		if (z[i] + i == n && maxv >= z[i])
		{
			ans = z[i];	
			break;
		}

		maxv = max(maxv, z[i]);
	}
	
	if (ans == 0)
		cout << "Just a legend";
	else
		cout << s.substr(0, ans);
	cout << endl;

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
