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
	double avg_cost = 0.0;
	int qty = 0;

	while(cin >> s) {
		int x, y;
		if (s == "buy") {
			cin >> x >> y;
			avg_cost = ((qty * avg_cost) + (x * y)) / (qty + x);
			qty += x;
		}
		else if (s == "sell") {
			cin >> x >> y;
			qty -= x;
		}
		else if (s == "split") {
			cin >> x;
			avg_cost /= x;
			qty *= x;
		}
		else if (s == "merge") {
			cin >> x;
			int m = qty / x;
			qty = m;
			avg_cost = avg_cost * x;
		}
		else {
			cin >> x;
			double profit = max(0.0, x - avg_cost);
			double ans = qty * (x - profit * 0.3);
			cout << setprecision(2) << fixed;
			cout << ans << '\n';
			break;
		}
	}
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
