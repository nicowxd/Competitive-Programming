#include <bits/stdc++.h>

using namespace std;

int main()
{

	long long int r, x1, x2, y1, y2;
	cin >> r >> x1 >> y1 >> x2 >> y2;

	double d = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	long long int ans = ceil(d/(2*r));
	cout << ans << endl;
	return 0;
}
