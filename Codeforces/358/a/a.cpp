#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int n;
	cin >> n;

	int point;
	vector< pair<int, int> > segment(n);
	for (int i = 0; i < n; i++) {
		cin >> point;
		if (i == 0)
			segment[i] = make_pair(point, point);
		else
			segment[i] = make_pair(segment[i-1].second, point);
	}
	
	int x1, x2, x3, x4;
	bool intersects = false;
	for (int i = 0; i < n; i++) {
		x1 = min(segment[i].first, segment[i].second);
		x2 = max(segment[i].first, segment[i].second);
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			x3 = min(segment[j].first, segment[j].second);
			x4 = max(segment[j].first, segment[j].second);
			if (x3 < x2 && x3 > x1 && x4 > x2)
				intersects = true;
			if (x1 < x4 && x1 > x3 && x2 > x4)
				intersects = true;
		}
	}
	
	if (intersects)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}
