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

	string s;
	cin >> s;

	int p1 = 0, p2 = 0;
	bool aWins = false, bWins = false;
	for (int i = 1; i < (int) s.size() && !aWins && !bWins; i+=2) {
		int point;

		if (s[i] == '1')
			point = 1;
		else
			point = 2;
		
		if (s[i-1] == 'A')
			p1 += point;	
		else
			p2 += point;

		if (p1 >= 11) {
			if (p1 - p2 >= 2)
				aWins = true;
		}
		else if (p2 >= 11)
			if (p2 - p1 >= 2)
				bWins = true;
	}

	if (aWins)
		cout << "A\n";
	else
		cout << "B\n";

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
