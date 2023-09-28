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
	
	for (int x = 1; x <= t; x++) {
		int n;
		cin >> n;

		int ans = 3;
		bool sacked = false;
		
		for (int i = 1; i <= n; i++) {
			char c;
			cin >> c;
			
			if (c == 'W' && !sacked)
				ans = i + 3;
			else {
				if (i >= ans)
					sacked = true;
			}
		}
		
		cout << "Case " << x << ": ";
		if (sacked)
			cout << ans << "\n";
		else
			cout << "Yay! Mighty Rafa persists!\n";
	}
			

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
