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

	int n;
	string actual[25], inc[25], dec[25];
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> actual[i];
		inc[i] = actual[i];
		dec[i] = actual[i];
	}
	
	sort(inc, inc + n);
	sort(dec, dec + n, greater<string>());

	bool increasing = true, decreasing = true;

	for (int i = 0; i < n; i++) {
		if (actual[i] != inc[i])
			increasing = false;
		if (actual[i] != dec[i])
			decreasing = false;
	}

	if (!increasing && !decreasing)
		cout << "NEITHER\n";
	else if (increasing)
		cout << "INCREASING\n";
	else
		cout << "DECREASING\n";

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
