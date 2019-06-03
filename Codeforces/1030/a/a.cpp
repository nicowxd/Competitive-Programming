#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int n, ans = 0;
	cin >> n;

	int x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		ans += x;
	}
	
	if (ans)
		cout << "HARD" << endl;
	else
		cout << "EASY" << endl;
    return 0;
}
