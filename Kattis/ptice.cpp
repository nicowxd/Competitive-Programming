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
	
	string adrian = "ABC";
	string bruno = "BABC";
	string goran = "CCAABB";
	
	int cnt_a = 0, cnt_b = 0, cnt_g = 0;

	for (int i = 0; i < n; i++) {
		if (s[i] == adrian[i % 3])
			cnt_a++;
		if (s[i] == bruno[i % 4])
			cnt_b++;
		if (s[i] == goran[i % 6])
			cnt_g++;
	}

	int ans = max(cnt_a, max(cnt_b, cnt_g));
	cout << ans << '\n';
		
	if (ans == cnt_a)
		cout << "Adrian\n";	
	if (ans == cnt_b)
		cout << "Bruno\n";
	if (ans == cnt_g)
		cout << "Goran\n";
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
