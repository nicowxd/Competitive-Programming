#include <bits/stdc++.h>

using namespace std;

map<string, int> m;
string s;
set<string> ans;

void solve(string b)
{	
	if (b.size() == 0 or m.count(b) > 0)
		return;
	
	ans.insert(b);
	m[b] = 1;
	for (int i = 0; i < (int) b.size(); i++)
	{
		string aux = b;
		solve(aux.erase(i, 1));
	}
}

int main()
{

	while(cin >> s)
	{
		ans.clear();
		m.clear();
		solve(s);

		for (auto x : ans)
			cout << x << endl;
		cout << endl;
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
