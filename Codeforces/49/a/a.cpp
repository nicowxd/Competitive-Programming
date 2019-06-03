#include <bits/stdc++.h>

using namespace std;

bool isvowel(char c) {
	char d = tolower(c);
	if (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u' || d == 'y')
		return true;
	return false;
}

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	string s;
	getline(cin, s);

	int i = (int) s.size() - 1;
	for (; i >= 0; i--)
		if (s[i] != '?' && s[i] != ' ')
			break;
	if (isvowel(s[i]))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
    return 0;
}
