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

	int n;
	cin >> n;

	int x, m = 0;
	set<int> s;

	for (int i = 0; i < n; i++) {
		cin >> x;
		s.insert(x);
	}

	if (x == (int) s.size()) 
		cout << "good job\n";
	else {
		for (int i = 1; i <= x; i++) {
			if (s.find(i) == s.end())
				cout << i << '\n';
		}
	}
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
