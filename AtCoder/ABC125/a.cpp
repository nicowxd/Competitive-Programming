#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	int a, b, t;
	cin >> a >> b >> t;

	int qt = t / a;
	cout << b * qt << endl;
    return 0;
}
