#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int n, m;
	cin >> n >> m;

	int value, plus = 0, minus = 0;
	for (int i = 0; i < n; i++) {
		cin >> value;
		if (value == -1) minus++;
		else plus++;
	}

	int l, r;
	for (int i = 0; i < m; i++) {
		cin >> l >> r;
		int qt = r - l + 1;
		if (qt & 1) {
			cout << "0\n";
		} else {
			if (plus >= (qt>>1) && minus >= (qt>>1))
				cout << "1\n";
			else
				cout << "0\n";
		}
	}

    return 0;
}
