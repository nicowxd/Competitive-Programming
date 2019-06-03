#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	string s;
	cin >> s;

	ll left = 0, right = 0, i = 0;

    while(s[i] != '^')
		i++;
	
	for (int j = 0; j < i; j++) {
		if (s[j] != '=') {
			ll val = s[j] - '0';
			left += val * (i - j);
		}
	}
	
	for (int j = i + 1; j < (int) s.size(); j++) {
		if (s[j] != '=') {
			ll val = s[j] - '0';
			right += val * (j - i);
		}
	}

	if (left > right)
		cout << "left" << endl;
	else if (left < right)
		cout << "right" << endl;
	else
		cout << "balance" << endl;

	return 0;
}
