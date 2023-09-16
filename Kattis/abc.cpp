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

	int a, b, c;
	string s;

	cin >> a >> b >> c;
	cin >> s;
	
	int mx = max(a, max(b, c));
	int mn = min(a, min(b, c));
	int mid;

	if (a != mx && a != mn) 
		mid = a;
	else if (b != mx && b != mn) 
		mid = b;
	else 
		mid = c;
	
	for (int i = 0; i < (int) s.size(); i++) {
		if (s[i] == 'A')
			cout << mn;
		else if (s[i] == 'B')
			cout << mid;
		else
			cout << mx;
		cout << " ";
	}
	cout << '\n';
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
