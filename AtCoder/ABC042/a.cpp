#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	vector<int> cnt(10);
	for (int i = 0; i < 3; i++) {
		int s;
		cin >> s;
		cnt[s]++;
	}
    if (cnt[5] == 2 && cnt[7] == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
