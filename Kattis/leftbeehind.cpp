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

	int x, y;
	while(cin >> x >> y && (x || y)) {
		
		if (x + y == 13)
			cout << "Never speak again.\n";
		else if (x == y)
			cout << "Undecided.\n";
		else if (x > y)
			cout << "To the convention.\n";
		else
			cout << "Left beehind.\n";
	}

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
