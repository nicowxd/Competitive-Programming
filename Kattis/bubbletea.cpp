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

	int n, m, k, x, budget;
	cin >> n;
	
	int tea[MAXN], toppings[MAXN];
	for (int i = 0; i < n; i++)
		cin >> tea[i];
	
	cin >> m;

	for (int i = 0; i < m; i++)
		cin >> toppings[i];
	
	int cheapest = INF;
	for (int i = 0; i < n; i++) {	
		cin >> k;
		
		for (int j = 0; j < k; j++) {
			cin >> x;
			cheapest = min(cheapest, tea[i] + toppings[x-1]);
		}
	}

	cin >> budget;

	int ans = max(0, budget / cheapest - 1);
	cout << ans << '\n';

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
