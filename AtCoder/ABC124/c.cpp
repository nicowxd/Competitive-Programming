#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	string s;
	cin >> s;
	int cnt0 = 0, cnt1 = 0, s0 = 0; 
	for (int i = 0; i < s.length(); i++) {
		if ((s[i] - '0') != s0)
			cnt0++;
		else
			cnt1++;
		s0 = 1 - s0;
	}
	cout << min(cnt0, cnt1) << endl;
    return 0;
}
