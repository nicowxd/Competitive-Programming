#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	int A, B;
	cin >> A >> B;
	if (A >= 13)
		cout << B << endl;
	else if (A >= 6 && A <= 12)
		cout << B / 2 << endl;
	else
		cout << 0 << endl;
    return 0;
}
