#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int n, m, k;
	cin >> n >> m >> k;

	vector<int> sockets(n);
	
	for (int i = 0; i < n; i++)
		cin >> sockets[i];
	
	sort(sockets.rbegin(), sockets.rend());
	
	int ans = -1, sum = 0;

	for (int i = 0; i < (int) sockets.size(); i++) {
		if (k + sum >= m) {
			ans = i;
			break;
		}
		
		sum += sockets[i];
		if (k)
			k--;
		else
			sum--;
	}
	
	if (k + sum >= m && ans == -1)
		ans = n;
	cout << ans << endl;
    return 0;
}
