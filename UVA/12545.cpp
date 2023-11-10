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

	int c;
	cin >> c;

	for (int i = 1; i <= c; i++) {
		string s, t;
		cin >> s >> t;

		int onesS = 0, onesT = 0, question = 0, zerosWrong = 0, onesWrong = 0;
		
		for (int i = 0; i < (int) s.size(); i++) {
			if (s[i] == '1')
				onesS++;
			if (t[i] == '1')
				onesT++;
			if (s[i] == '?')
				question++;
			if (s[i] == '0' && t[i] == '1')
				zerosWrong++;
			if (s[i] == '1' && t[i] == '0')
				onesWrong++;
		}
		
		cout << "Case " << i << ": ";
		if (onesS > onesT)
			cout << "-1\n";
		else {
			int ans = max(zerosWrong, onesWrong) + question;
			cout << ans << '\n';
		}

	}

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
