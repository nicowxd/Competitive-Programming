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
	string s;

	cin >> n >> s;

	for (int i = n; i >= 1; i--) {
		if (i > 2) {
			cout << i << " bottles of " << s << " on the wall, "<< i << " bottles of " << s << ".\n";
			cout << "Take one down, pass it around, " << i -1 << " bottles of " << s << " on the wall.\n\n";
		} 
		else if (i == 2) {
			cout << i << " bottles of " << s << " on the wall, "<< i << " bottles of " << s << ".\n";
			cout << "Take one down, pass it around, " << i -1 << " bottle of " << s << " on the wall.\n\n";
		}
		else {
			cout << i << " bottle of " << s << " on the wall, "<< i << " bottle of " << s << ".\n";
			cout << "Take it down, pass it around, no more bottles of " << s << ".\n";
		}
	}
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
