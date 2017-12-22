#include <bits/stdc++.h>

using namespace std;

int main()
{
	set<char> S;
	char c;
	while(cin >> c && c != '}')
	{
		if (isalpha(c))
			S.insert(c);
	}
	cout << S.size() << "\n";
	return 0;
}
