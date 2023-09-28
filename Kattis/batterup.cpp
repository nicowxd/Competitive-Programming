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
	
	int x, cnt = 0, ans = 0;

	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x != -1) {
			ans += x;
			cnt++;
		}
	}

	cout << setprecision(6) << fixed;
	cout << 1.0*ans / cnt << '\n';
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
