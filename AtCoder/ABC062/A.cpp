#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	vector<int> group(20);
	group[1] = 1;
	group[3] = 1;
	group[5] = 1;
	group[7] = 1;
	group[8] = 1;
	group[10] = 1;
	group[12] = 1;
	group[4] = 2;
	group[6] = 2;
	group[9] = 2;
	group[11] = 2;
	group[2] = 3;

	int x, y;
	cin >> x >> y;
	
	if (group[x] == group[y])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

    return 0;
}
