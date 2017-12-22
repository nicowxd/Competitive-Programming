#include <bits/stdc++.h>

using namespace std;

int main()
{


	int n, m, l, r;
	char c1, c2;
	string s;

	scanf("%d %d%*c", &n, &m);
	cin >> s;
	
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d %c %c", &l, &r, &c1, &c2); 
		l--; r--;

		for (int i = l; i <= r; i++)
			if (s[i] == c1)
				s[i] = c2;
	}

	cout << s << endl;
	return 0;
}
