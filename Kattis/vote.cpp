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
		int n;
		cin >> n;

		int sum = 0, most = 0, winner = 1;
		bool no_winner = false;
		for (int i = 1; i <= n; i++) {
			int x;
			cin >> x;

			if (i == 0) {
			   winner = i;
			   most = x;
			   continue;
			}
			
			if (x > most) {
				no_winner = false;
				winner = i;
				most = x;
			} 
			else if (x == most) {
				no_winner = true;
			}
			sum += x;
		}	
		
		if (no_winner) {
			cout << "no winner\n";
		}
		else {
			if (most > sum / 2)
				cout << "majority winner ";
			else
				cout << "minority winner ";
			cout << winner << '\n';
		}
	}
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
