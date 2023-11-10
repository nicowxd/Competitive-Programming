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

	int n, t;
	cin >> n >> t;
	
	vector<ll> a(n);
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	
	if (t == 1) {
		cout << "7\n";
	}
	else if (t == 2) {
		if (a[0] > a[1])
			cout << "Bigger\n";
		else if (a[0] == a[1])
			cout << "Equal\n";
		else
			cout << "Smaller\n";
	}
	else if (t == 3) {
		vector<int> v;
		v.push_back(a[0]);
		v.push_back(a[1]);
		v.push_back(a[2]);
		sort(v.begin(), v.end());
		cout << v[1] << '\n';
	}
	else if (t == 4) {
		ll sum = 0;
		for (int i = 0; i < n; i++) 
			sum += a[i];
		cout << sum << '\n';
	}
	else if (t == 5) {
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] % 2 == 0)
				sum += a[i];
		}
		cout << sum << '\n';
	}
	else if (t == 6) {
		for (int i = 0; i < n; i++)
			cout << (char) ('a' + (a[i] % 26));
		cout << '\n';
	}
	else {
		vector<bool> vis(n, false);
		int i = 0;
		while(true) {
			i = a[i];
			if (vis[i]) {
				cout << "Cyclic\n";
				break;
			}
			if (i < 0 || i >= n) {
				cout << "Out\n";
				break;
			}
			else if (i == n - 1) {
				cout << "Done\n";
				break;
			}
			vis[i] = true;
		}
	}
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
