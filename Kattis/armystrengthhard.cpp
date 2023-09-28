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

	int t;
	cin >> t;

	while(t--) {

		int ng, nm;
		cin >> ng >> nm;
		
		int maxG = 0, maxM = 0;
		
		for (int i = 0; i < ng; i++) {
			int g;
			cin >> g;
			maxG = max(g, maxG);
		}	

		for (int i = 0; i < nm; i++) {
			int m;
			cin >> m;
			maxM = max(m, maxM);
		}

		if (maxM <= maxG)
			cout << "Godzilla\n";
		else
			cout << "MechaGodzilla\n";
	}

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
