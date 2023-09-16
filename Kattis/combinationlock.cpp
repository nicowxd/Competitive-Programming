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

	int p, a, b, c;
	while(cin >> p >> a >> b >> c && (p || a || b || c)) {
		p++, a++, b++, c++;
		
		int first = p < a ? 40 + p - a : p - a; // Rotating CCW
		int second = b < a ? 40 + b - a : b - a; // Rotating CW
		int third = b < c ? 40 + b - c : b - c; // Rotating CCW 
												// It seems that we need to rotate in the reverse order, dont know why
		
		cout << 1080 + 9*first + 9*second + 9*third << '\n';
	}

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
