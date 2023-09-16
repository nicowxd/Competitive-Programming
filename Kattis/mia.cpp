#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> AdjList;
 
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 10;

int transform(int a, int b) {
	if (b > a)
		swap(b, a);
	return (a * 10 + b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

	int s0, s1, r0, r1;
	while(cin >> s0 >> s1 >> r0 >> r1 && (s0 || s1 || r0 || r1)) {
		int p1 = transform(s0, s1);
		int p2 = transform(r0, r1);

		if (p1 == 21 || p1 == 12) {
			if (p2 == 21 || p2 == 12)
				cout << "Tie.\n";
			else
				cout << "Player 1 wins.\n";
		}
		else if (p2 == 21 || p2 == 12) {
			cout << "Player 2 wins.\n";
		}
		else if (s0 == s1) {
			if (r0 == r1) {
				if (p1 > p2)
					cout << "Player 1 wins.\n";
				else if (p2 > p1)
					cout << "Player 2 wins.\n";
				else
					cout << "Tie.\n";
			} 
			else 
				cout << "Player 1 wins.\n";
		}
		else if (r0 == r1)
			cout << "Player 2 wins.\n";
		else if (p1 > p2)
			cout << "Player 1 wins.\n";
		else if (p2 > p1)
			cout << "Player 2 wins.\n";
		else
			cout << "Tie.\n";
	}
		

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
