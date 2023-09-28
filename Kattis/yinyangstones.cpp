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

	string s;
	cin >> s;

	int cnt_w = 0, cnt_b = 0;

	for (int i = 0; i < (int) s.size(); i++) {
		if (s[i] == 'W')
			cnt_w++;
		else
			cnt_b++;
	}

	if (cnt_w == cnt_b)
		cout << "1\n";
	else
		cout << "0\n";

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
