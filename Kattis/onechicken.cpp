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

	int n, m;
	cin >> n >> m;
	
	if (m >= n) {
		cout << "Dr. Chaz will have " << m - n;
	   	if (m - n == 1)
			cout << " piece";
		else 
			cout << " pieces";
		cout << " of chicken left over!\n";
	}
	else {
		cout << "Dr. Chaz needs " << n - m;
		if (n - m == 1)
			cout << " more piece";
		else 
			cout << " more pieces";
		cout << " of chicken!\n";
	}

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
