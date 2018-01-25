#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	string s;

	scanf("%d ", &n);

	while(n--)
	{
		getline(cin, s);
		
		int pos = s.find("oulupukk", 0, 8);
		while (pos != -1)
		{
			s[pos-1] = 'J';
			s[pos+8] = 'i';
			pos = s.find("oulupukk", pos+1, 8);
		}

		cout << s << endl;
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
