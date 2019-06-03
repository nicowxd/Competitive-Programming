#include <bits/stdc++.h>

using namespace std;

int simulation(int a, int b, int c, int day)
{
	int cnt = 0;

	while(a >= 0 && b >= 0 && c >= 0) {
		if (day == 0 || day == 3 || day == 6) {
			a--;
			cnt++;
		} else if (day == 1 || day == 5) {
			b--;
			cnt++;
		} else {
			c--;
			cnt++;
		}
		day = (day + 1) % 7;
	}
	
	return cnt - 1;
}		

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	int a, b, c;

	cin >> a >> b >> c;

	if (a < 3 || b < 2 || c < 2) {
		int val, mx = 0;
		for (int i = 0; i < 7; i++) {
			val = simulation(a, b, c, i);
			if (val > mx) mx = val;
		}

		cout << mx << endl;
	} else {
		int divA = a / 3;
		int divB = b / 2;
		int divC = c / 2;

		int mn = min(divA, min(divB, divC));
		
		int ans = (7 * mn), val, mx = 0;
		for (int i = 0; i < 7; i++) {
			val = simulation(a - 3*mn, b - 2*mn, c - 2*mn, i);
			if (val > mx) mx = val;
		}
		cout << ans + mx << endl;
	}

    return 0;
}
