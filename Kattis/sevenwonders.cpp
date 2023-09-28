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

	int cnt_t = 0, cnt_c = 0, cnt_g = 0;

	for (int i = 0; i < (int) s.size(); i++) {
		if (s[i] == 'T')
			cnt_t++;
		else if (s[i] == 'C')
			cnt_c++;
		else
			cnt_g++;
	}

	int ans = cnt_t*cnt_t + cnt_c*cnt_c + cnt_g*cnt_g;
	int bonus = min(cnt_t, min(cnt_c, cnt_g));
	ans += 7 * bonus;

	cout << ans << '\n';

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
