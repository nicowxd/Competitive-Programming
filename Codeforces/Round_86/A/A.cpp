#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

	ll k, l, x = 0LL, i;
	cin >> k;
	cin >> l;

	for (i = k; i < l; i *= k)
	{
		x++;
	}

	if (i == l)
	{
		printf("YES\n");
		cout << x << endl;
	}
	else
		printf("NO\n");
	return 0;
}
