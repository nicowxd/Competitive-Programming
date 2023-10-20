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

	int t;
	cin >> t;

	for (int i = 1; i <= t; i++) {

		int n;
		cin >> n;

		int ans = 0;
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			ans = max(ans, x);
		}

		cout << "Case " << i << ": " << ans << '\n';
	}

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
