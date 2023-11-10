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

	int s, v1, v2;
	cin >> s >> v1 >> v2;

	int d = 0, ansV1, ansV2;
	bool found = false;
	while(d * v1 <= s) {
		
		if ((s - (d * v1)) % v2 == 0) {
			ansV1 = d;
			ansV2 = (s - (d * v1)) / v2;
			found = true;
		}
		d++;
	}
	
	if (!found)
		cout << "Impossible\n";
	else
		cout << ansV1 << " " << ansV2 << '\n';
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
