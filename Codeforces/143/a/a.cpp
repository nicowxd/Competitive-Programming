#include <bits/stdc++.h>

using namespace std;

int r1, r2, c1, c2, d1, d2;

bool check_row(int i, int j, int k, int l) {
	return i + j == r1 && k + l == r2;
}

bool check_col(int i, int j, int k, int l) {
	return i + k == c1 && j + l == c2;
}

bool check_diag(int i, int j, int k, int l) {
	return i + l == d1 && k + j == d2;
}

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
	
	bool open = false;
	vector<int> ans[4];	
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			for (int k = 1; k <= 9; k++) {
				for (int l = 1; l <= 9; l++) {
					if (check_row(i, j, k, l) && check_col(i, j, k, l) && check_diag(i, j, k, l)) {
						open = true;
						ans[0].push_back(i);
						ans[1].push_back(j);
						ans[2].push_back(k);
						ans[3].push_back(l);
					}
				}
			}
		}
	}
	
	if (open) {
		for (int i = 0; i < (int) ans[0].size(); i++) {
			int a = ans[0][i];
			int b = ans[1][i];
			int c = ans[2][i];
			int d = ans[3][i];
			if (a == b || a == c || a == d || b == c || b == d || c == d)
				continue;
			else {
				cout << a << " " << b << endl;
				cout << c << " " << d << endl;
				return 0;
			}
		}
		cout << "-1" << endl;
	} else {
		cout << "-1" << endl;
	}
	return 0;
}
