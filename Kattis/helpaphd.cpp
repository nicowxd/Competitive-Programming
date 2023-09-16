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
	cin >> n;
	
	while(n--) {
		string s;
		int a, b;
		char c;
	
		cin >> s;

		if (s[1] == '=') {
			cout << "skipped\n";
		}
		else {
			stringstream ss(s);
			ss >> a >> c >> b;
			cout << a + b << '\n';
		}
	}

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
