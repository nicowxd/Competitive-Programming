#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	int n = 5;	
	vector<int> dishes(5), perm(5);
	for (int i = 0; i < n; i++) {
		cin >> dishes[i];
		perm[i] = i;
	}
	
	int ans = INF;

	do {
		int start = 0;
		for (int i = 0; i < n; i++) {
			start += dishes[perm[i]];
			int m = start % 10;
			if (m != 0 && i != n - 1)
				start += (10 - m);
		}
		ans = min(ans, start); 
	} while(next_permutation(perm.begin(), perm.end()));
    cout << ans << endl;
	return 0;
}
