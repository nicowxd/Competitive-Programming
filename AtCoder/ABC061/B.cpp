#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	int n, m;
	cin >> n >> m;

	int a, b;
	vector<int> count(n + 1, 0);
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		count[a]++, count[b]++;
	}

	for (int i = 1; i <= n; i++)
		cout << count[i] << endl;
    return 0;
}
