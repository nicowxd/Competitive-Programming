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
	
	while(t--) {
		int n, m;
		cin >> n >> m;
		
		int prize[15] = {};
		map<int, vector<int> > mp;
		for (int i = 0; i < n; i++) {
			int k;
			cin >> k; 
			
			for (int j = 0; j < k; j++) {
				int s;
				cin >> s;
				mp[i].push_back(s);
			}

			int p;
			cin >> p;
			prize[i] = p;
		}
		
		int stickers[35] = {};
		for (int i = 0; i < m; i++) {
			int k;
			cin >> k;
			stickers[i] = k;
		}
		
		int ans = 0;
		for (int i = 0; i < n; i++) {
			int qt = INF;
			for (int j = 0; j < (int) mp[i].size(); j++)
				qt = min(qt, stickers[mp[i][j] - 1]);
			ans += prize[i] * qt;
		}
		
		cout << ans << '\n';
	}
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
