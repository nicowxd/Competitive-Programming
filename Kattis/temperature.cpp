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

	int x, y;
	cin >> x >> y;

	if (x != 0 && y == 1)
		cout << "IMPOSSIBLE\n";
	else if (y == 1 && x == 0)
		cout << "ALL GOOD\n";
	else if (x == 0)
		cout << "0\n";
	else {
		y--;
		double ans = -x / (y*1.0);
		
		cout << setprecision(9) << fixed;
		cout << ans << '\n';

	}

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
