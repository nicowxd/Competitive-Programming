#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int n, k;
	string s;
	cin >> n >> k >> s;
	s[k - 1] = tolower(s[k - 1]);
	cout << s << endl;
    return 0;
}
