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

	int x, y, n;
	cin >> x >> y >> n;

	for (int i = 1; i <= n; i++) {
		bool isFizz = (i % x == 0);

		bool isBuzz = (i % y == 0);

		if (isFizz && isBuzz)
			cout << "FizzBuzz\n";
		else if (isFizz)
			cout << "Fizz\n";
		else if (isBuzz)
			cout << "Buzz\n";
		else
			cout << i << '\n';
	}

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
