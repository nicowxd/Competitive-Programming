#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	string a, b, c;
	cin >> a >> b >> c;

	int len_a = (int) a.size();
	int len_b = (int) b.size();

	if (a[len_a - 1] == b[0] && b[len_b - 1] == c[0])
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';
	
    return 0;
}
