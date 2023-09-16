#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> AdjList;
 
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 10;

int digits(int num) {
	int ans = 0;
	while(num) {
		num /= 10;
		ans++;
	}
	return ans;
}

int steps(int num) {
	if (num == 1)
		return 2;
	int nxt = digits(num);
	return 1 + steps(nxt);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

	string s;
	while(cin >> s && s != "END") {

		int num = (int) s.size();
		if (s == "1") {
			cout << "1\n";
			continue;
		}
		cout << steps(num) << '\n';
	}

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
