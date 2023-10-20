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

	int w, l;
	while(cin >> w >> l) {
		if (w == 0 && l == 0)
			break;
	
		int n;
		cin >> n;
		
		int actual_x = 0, actual_y = 0;
		int think_x = 0, think_y = 0;

		for (int i = 0; i < n; i++) {
			char s;
			int x;

			cin >> s >> x;

			if (s == 'u') {
				actual_y = min(l - 1, actual_y + x);
				think_y = think_y + x;
			}
			else if (s == 'd') {
				actual_y = max(0, actual_y - x);
				think_y = think_y - x;
			}
			else if (s == 'l') {
				actual_x = max(0, actual_x - x);
				think_x = think_x - x;
			}
			else {
				actual_x = min(w - 1, actual_x + x);
				think_x = think_x + x;
			}
		}

		cout << "Robot thinks " << think_x << " " << think_y << '\n';
		cout << "Actually at " << actual_x << " " << actual_y << "\n\n";

	}

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
