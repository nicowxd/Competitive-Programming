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

	double c, x, m;
	const double EPS = 1e-6;
	cin >> c >> x >> m;
	
	c /= 2.0;
	bool can = false;
	int ans = 0;

	for (int i = 0; i < 6; i++) {
		int mph;
		double mpg;

		cin >> mph >> mpg;
		
		double hours = m / mph;
		double gallons = m / mpg;
		double used = c - (hours * x + gallons);
		
		if (used >= EPS) {
			can = true;
			ans = mph;
		}
	}

	if (can)
		cout << "YES " << ans << '\n';
	else
		cout << "NO\n";

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
