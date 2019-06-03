#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int p, ans = 0;
	cin >> p;

	for (int i = 1; i < p; i++) {
		int root = i;
		bool ok = true;
		for (int j = 1; (j < p - 1) && ok; j++) {
			if ((root - 1) % p == 0)
				ok = false;
			root = (root * i) % p;
		}
		if (ok && ((root - 1) % p == 0)) {
			ans++;
		}
	}
	
	cout << ans << endl;
    return 0;
}
