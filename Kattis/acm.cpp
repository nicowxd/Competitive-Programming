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

	int m, ans = 0, penalties = 0;
	int sub[27] = {0};
	bool solved[27] = {0};
	char c; 
	string s;
	
	while(cin >> m && m != -1) {
		
		getchar();
		cin >> c >> s;
		
		if (s == "right" && !solved[c - 'A']) {
			solved[c - 'A'] = true;
			penalties = penalties + m + sub[c - 'A'];
			ans++;
		}
		else
			sub[c - 'A'] += 20;
	}

	cout << ans << " " << penalties << "\n";

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
