#include <bits/stdc++.h>

using namespace std;

string drinks[11] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};

bool is_drink(string s) {
	for (int i = 0; i < 11; i++)
		if (s == drinks[i])
			return true;
	return false;
}

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int n;
	cin >> n;
	
	int ans = 0;
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (isdigit(s[0])) {
			int age;
			stringstream ss(s);
			ss >> age;
			if (age < 18)
				ans++;
		} else {
			if (is_drink(s))
				ans++;
		}
	}

	cout << ans << endl;
    return 0;
}
