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

	int k, n;
	cin >> k >> n;
	k--;

	int times[101];
	char ans[101];

	for (int i = 0; i < n; i++)
		cin >> times[i] >> ans[i];
	
	int start = 210, last;
	
	for (int i = 0; i < n; i++) {
		start -= times[i];

		if (start <= 0) {
			cout << k + 1 << '\n';
			break;
		}

		if (ans[i] == 'T')
			k = (k + 1) % 8;
	}
	


    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
