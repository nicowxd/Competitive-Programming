#include <bits/stdc++.h>

using namespace std;

string convert(char digit)
{
	string ans = "";
	if (digit - '0' < 5)
		ans += "O-|";
	else {
		digit -= 5;
		ans += "-O|";
	}

	if (digit == '0')
		ans += "-OOOO";
	else if (digit == '1')
		ans += "O-OOO";
	else if (digit == '2')
		ans += "OO-OO";
	else if (digit == '3')
		ans += "OOO-O";
	else
		ans += "OOOO-";

	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	string n;
	cin >> n;
	
	reverse(n.begin(), n.end());
	
	for (int i = 0; i < (int) n.size(); i++) {
		cout << convert(n[i]) << '\n';
	}

    return 0;
}
