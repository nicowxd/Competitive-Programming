#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> AdjList;
 
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 10;

const int cards[5] = {1, 10, 100, 1000, 10000};

int bestcard(int b, int sum) {
	
	int diff = b - sum;
	int best = 1;

	for (int i = 0; i < 5; i++) {
		if (cards[i] <= diff)
			best = cards[i];
	}
	return best;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

	int n, m;
	
	while(cin >> n >> m) {
		
		int ans = 0;
		for (int i = 0; i < m; i++) {
			int b;
			cin >> b;
			
			int sum = 0;
			vector<int> v(n);
			for (int j = 0; j < n; j++) {
				cin >> v[j];
				sum += v[j];
			}
			int best = bestcard(b, sum - v[0]);
			if (best + sum <= b + v[0]) {
				ans += best;
				if (b >= sum)
					ans -= v[0];
			}
		}
		cout << ans << '\n';
	}	

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
