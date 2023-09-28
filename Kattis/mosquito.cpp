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

	int m, p, l, e, r, s, n;

	while(cin >> m >> p >> l >> e >> r >> s >> n) {
	
		for (int i = 1; i <= n; i++) {
			int new_m = p / s;
			int new_p = l / r;
			int new_l = e * m;
			
			m = new_m;
			p = max(0, new_p);
			l = max(0, new_l);
		}

		cout << m << '\n';
	}
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
