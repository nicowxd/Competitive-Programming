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

	int g, t, n;
	cin >> g >> t >> n;

	int ans = g - t, sum = 0;
	
	for (int i = 0; i < n; i++) {
		int x;
 		cin >> x;
		sum += x;
	}

	cout << 0.9*ans - sum << '\n';

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
