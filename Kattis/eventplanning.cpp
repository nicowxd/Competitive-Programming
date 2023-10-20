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

	int n, b, h, w;
	cin >> n >> b >> h >> w;
	
	int ans = INF;
	while(h--) {

		int p;
		cin >> p;

		for (int i = 0; i < w; i++) {
			int beds;
			cin >> beds;

			if (beds >= n) {
				ans = min(ans, p * n);
			}
		}
	}

	if (ans <= b)
		cout << ans << '\n';
	else
		cout << "stay home\n";

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
