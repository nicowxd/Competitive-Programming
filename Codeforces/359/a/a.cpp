#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int n, m;
	cin >> n >> m;
	
	int cell;
	bool two_moves = false;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> cell;
    		if (cell == 1) {
				if (i == 1 || i == n || j == 1 || j == m) 
					two_moves = true;
			}
		}
	}
	
	if (two_moves)
		cout << "2\n";
	else
		cout << "4\n";
	
	return 0;
}
