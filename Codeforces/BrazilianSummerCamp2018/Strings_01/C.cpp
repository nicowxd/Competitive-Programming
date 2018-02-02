#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 10;

string s;
int p[MAXN], len;

void prefix_func()
{
	for (int i = 1; i < len; i++)
	{
		int j = p[i-1];
		while (j > 0 && s[i] != s[j])
			j = p[j-1];
		if (s[i] == s[j])
			j++;
		p[i] = j;
	}
}

int main()
{

	cin >> s;
	
	len = (int) s.size();
	prefix_func();

	for (int i = 0; i < len; i++)
		printf("%d ", p[i]);
	printf("\n");

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
