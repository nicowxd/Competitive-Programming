#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> AdjList;
 
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 10;

bool isVowel(char c) {
	string vowels = "aeiouy";
	for (char v : vowels) {
		if (v == c)
			return true;
	}
	return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

	int n;
	while(cin >> n) {
		if (n == 0)
			break;
		
		int pairs = 0;
		string ans = "";
		for (int i = 0; i < n; i++) {
			string s;
			cin >> s;
			
			int count = 0;
			for (int j = 1; j < (int) s.size(); j++) {
				if (isVowel(s[j]) && s[j] == s[j - 1]) {
					count++;
				}
			}
			if (count >= pairs) {
				pairs = count;
				ans = s;
			}
		}

		cout << ans << '\n';
	}

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
