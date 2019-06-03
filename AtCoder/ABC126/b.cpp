#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	string s;
	cin >> s;
	int a = (s[0] - '0') * 10 + (s[1] - '0');
	int b = (s[2] - '0') * 10 + (s[3] - '0');
    bool ma = false, mb = false;
	if (a >= 1 && a <= 12)
		ma = true;
	if (b >= 1 && b <= 12)
		mb = true;
	if (ma && mb)
		cout << "AMBIGUOUS" << endl;
	else if (ma && !mb)
		cout << "MMYY" << endl;
	else if (!ma && mb)
		cout << "YYMM" << endl;
	else
		cout << "NA" << endl;
	return 0;
}
