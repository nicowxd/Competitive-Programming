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

	int h, w;
	while(cin >> h >> w) {

		string s[110];
		
		for (int i = 0; i < h; i++)
			cin >> s[i];

		/* Apply Picks theorem: 
		 * 			Area = i + b/2 - 1, 
		 * where i are the number of points inside the polygon
		 * and b are the number of points in the boundary
		*/

		int inside = 1, boundary = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (s[i][j] == '\\' || s[i][j] == '/') {
					boundary++;
					//cout << "Boundary: " << j << '\n';
					j++;
					while((j < w) && (s[i][j] != '\\' && s[i][j] != '/')) {
					//	cout << "Inside: " << j << '\n';
						inside++;
						j++;
					}
					boundary++;
				}
			}
		}

		int ans = inside + boundary/2 - 1;
		cout << ans << '\n';
	}


    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
