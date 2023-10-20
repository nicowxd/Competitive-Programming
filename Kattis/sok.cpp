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

	int a, b, c, i, j, k;
	cin >> a >> b >> c >> i >> j >> k;  
	
	double orange = (1.0 * a) / i;
	double apple = (1.0 * b) / j;
	double pinneaple = (1.0 * c) / k;

	double ratio = min(orange, min(apple, pinneaple));

	double ans1 = a - (ratio * i);
	double ans2 = b - (ratio * j);
	double ans3 = c - (ratio * k);

	cout << setprecision(4) << fixed;
	cout << ans1 << " " << ans2 << " " << ans3 << '\n';
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
