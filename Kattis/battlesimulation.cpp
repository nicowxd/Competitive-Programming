#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> AdjList;
 
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 10;

int combo(string sub) {
	
	string s = "RBL";
	return is_permutation(s.begin(), s.end(), sub.begin());
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

	string s;
	cin >> s;

	for (int i = 0; i < (int) s.size(); i++) {
		if (i + 2 < (int) s.size() && combo(s.substr(i, 3))) {
			cout << "C";
			i += 2;
		}
		else if (s[i] == 'R') 
			cout << "S";
		else if (s[i] == 'B')
			cout << "K";
		else
			cout << "H";
	}

	cout << '\n';

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
