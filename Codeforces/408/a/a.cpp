#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 10;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	int n;
	cin >> n;
	
	vector<int> people(n);
	for (int i = 0; i < n; i++) {
		cin >> people[i];
	}
	
	int ans = INF, items;
	for (int i = 0; i < n; i++) {
		int sum = people[i]*15;
		for (int j = 0; j < people[i]; j++) {
			cin >> items;
			sum += items*5;
		}
		ans = min(ans, sum);
	}

	cout << ans << '\n';
	
    return 0;
}
