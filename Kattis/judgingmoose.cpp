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

	int a, b;
	cin >> a >> b;

	if (a == b) {
		if (a == 0)
			cout << "Not a moose\n";
		else
			cout << "Even " << a + b << '\n';
	}
	else {
		cout << "Odd ";
		if (a > b)
			cout << a * 2 << '\n';
		else
			cout << b * 2 << '\n';
	}

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
