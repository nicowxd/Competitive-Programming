#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> AdjList;
 
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 10;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

	string s;
	map<char, int> mp;

	for (int i = 0; i < 5; i++) {
		cin >> s;
		mp[s[0]]++;
	}

	int mx = 0;
	for (auto &x : mp) {
		if (x.second > mx)
			mx = x.second;
	}

	cout << mx << '\n';
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
