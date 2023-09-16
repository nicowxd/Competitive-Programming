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

	int s, c = 1;
	cin >> s;

	while(s--) {
		
		bool allSolved = true;
		for (int i = 0; i < 13; i++) {
			int x;
			cin >> x;

			if (x == 0)
				allSolved = false;
		}
		cout << "Set #" << c++ << ": ";
		if (allSolved)
			cout << "Yes\n";
		else
			cout << "No\n";
	}

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
