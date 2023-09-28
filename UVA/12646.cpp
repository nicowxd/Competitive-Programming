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

	int a, b, c;
	while(cin >> a >> b >> c) {

		if (a != b && b == c)
			cout << "A\n";
		else if (b != c && a == c)
			cout << "B\n";
		else if (c != a && a == b)
			cout << "C\n";
		else
			cout << "*\n";
	}

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}