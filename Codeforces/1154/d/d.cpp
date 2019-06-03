#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	int n, b, a;
	
	cin >> n >> b >> a;

	vector<int> s(n);

	for (int i = 0; i < n; i++) 
		cin >> s[i];

	int max_a = a;
	int ans = 0;
	bool ok = true;

	for (int i = 0; i < n && ok; i++) {
		if (s[i] == 0) {
			if (a > 0) {
				a--;
			} else if (b > 0) {
				b--;
			} else {
				break;
			}
		} else {
			if (a < max_a && b > 0) {
				b--;
				a++;
			} else if (a > 0) {
				a--;
			} else {
				break;
			}
		}
		ans++;
	}

	cout << ans << endl;
    return 0;
}
