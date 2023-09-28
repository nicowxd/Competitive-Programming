#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> AdjList;
 
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 10;
const double eps = 1e-3;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

	int n, ans = 0;
	cin >> n;
	
	while(n--) {
		double l, w, d, weight;
		cin >> l >> w >> d >> weight;

		if (weight - 7.00 < eps) {
			double sum = l + w + d;
			if (sum - 125.00 < eps || (l - 56 < eps && w - 45 < eps && d - 25 < eps)) {
				cout << "1\n";
				ans++;
			}
			else
				cout << "0\n";
		}
		else
			cout << "0\n";

	}
	cout << ans << "\n";
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
