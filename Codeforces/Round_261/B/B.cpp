#include <bits/stdc++.h>

using namespace std;

int main()
{

	long long int n;
	int b = 0, l = 1e9, v[345678];
	
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", v+i);
		b = max(b, v[i]);
		l = min(l, v[i]);
	}

	long long int x = 0, y = 0;
	for (int i = 0; i < n; i++)
	{
		if (v[i] == b)
			x++;
		if (v[i] == l)
			y++;
	}
	
	printf("%d ", b-l);
	if (b == l)
		cout << n*(n-1)/2 << endl;
	else
		cout <<  x*y << endl;
	return 0;
}
