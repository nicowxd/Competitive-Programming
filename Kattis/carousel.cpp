#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> AdjList;
 
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 10;
const double EPS = 1e-9;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

	int n, m;
	while(cin >> n >> m) {
		if (n == 0 && m == 0)
			break;
		
		double ans = 50.0;
		int ansTickets = 0, ansPrice;
		for (int i = 0; i < n; i++) {
			int a, b;
			cin >> a >> b;
			
			if (a <= m) {
				double cur = b * 1.0 / a;
				
				if (cur < ans) {
					ans = cur;
					ansTickets = a;
					ansPrice = b;
				} else if (cur == ans) {
					if (a > ansTickets) {
						ansTickets = a;
						ansPrice = b;
					}
				}
			}
		}
		
		if (ansTickets == 0)
			cout << "No suitable tickets offered\n";
		else
			cout << "Buy " << ansTickets << " tickets for $" << ansPrice << '\n';
	}
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

    return 0;
}
