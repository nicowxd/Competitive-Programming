#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> AdjList;
 
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;
const int MAXN = 1e2 + 10;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

	int r, c;
	cin >> r >> c;

	string grid[250];
	
	for (int i = 0; i < r; i++)
		cin >> grid[i];

	int ans = 0;
	int x = 0, y = 0;

	while(true) {
		
		if (ans >= r * c) {
			ans = -1;
			break;
		}
		
		if (grid[x][y] == 'N')
			x--;
		else if (grid[x][y] == 'S')
			x++;
		else if (grid[x][y] == 'W')
			y--;
		else if (grid[x][y] == 'E')
			y++;
		else if (grid[x][y] == 'T')
			break;
		
		if (x >= r || x < 0 || y >= c || y < 0) {
			ans = -2;
			break;
		}

		ans++;
	}
	
	if (ans == -2)
		cout << "Out\n";
	else if (ans == -1)
		cout << "Lost\n";
	else
		cout << ans << "\n";

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
