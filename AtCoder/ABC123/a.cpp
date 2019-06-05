#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int a, b, c, d, e, k;
	cin >> a >> b >> c >> d >> e >> k;
	if (e - a > k)
		cout << ":(" << endl;
	else
		cout << "Yay!" << endl;
    return 0;
}
