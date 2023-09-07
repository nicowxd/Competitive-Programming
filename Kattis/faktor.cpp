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
	
	int a, i;
	cin >> a >> i;

	int ans = 1;
	while(true) {
		double factor = ceil(ans*1.0 / a);
		if ((int) factor >= i) {
			cout << ans << '\n';
			break;
		}
		ans++;
	}

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
