#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> AdjList;
 
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;
const int MAXN = 100010;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

	int n;
	cin >> n;

	while(n--) {

		string s;
		cin >> s;
		
		int pos[MAXN * 2] = {}, height = MAXN;
		int ans = 0;
		for (int i = 0; i < (int) s.size(); i++) {
			if (s[i] == '\\') {
				pos[height] = i + 1;
				height--;
			}
			else if (s[i] == '/' && pos[++height]) {
				ans += i - pos[height] + 1;
				pos[height] = 0;
			}
		}

		cout << ans << '\n';
	}
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
