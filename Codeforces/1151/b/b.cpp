#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	int n, m, initial_ans = 0, id = -1, change = -1;
	cin >> n >> m;

	vector< vector<int> > v(n + 1, vector<int>(m + 1));
	
	for (int i = 1; i <= n; i++) {
		cin >> v[i][0];
		initial_ans ^= v[i][0];
		
		for (int j = 2; j <= m; j++) {
			cin >> v[i][j];
			if (v[i][j] != v[i][0]) {
				id = i;
				change = j;
			}
		}
	}
	
	if (initial_ans > 0) {
		cout << "TAK\n";
		for (int i = 1; i <= n; i++)
			cout << "1" << (i == n ? '\n' : ' ');
	} else if (id != -1) {
		cout << "TAK\n";
		for (int i = 1; i <= n; i++) {
			if (i == id) 
				cout << change << (i == n ? '\n' : ' ');
			else 
				cout << "1" << (i == n ? '\n' : ' ');
		}
	} else {
		cout << "NIE\n";
	}
    return 0;
}
