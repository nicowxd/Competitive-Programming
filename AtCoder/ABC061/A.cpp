#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	int a, b, c;
	cin >> a >> b >> c;

	if (c >= a && c <= b)
		cout << "Yes\n";
	else
		cout << "No\n";
    return 0;
}
