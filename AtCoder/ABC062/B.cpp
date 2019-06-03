#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	int h, w;
	cin >> h >> w;

	for (int i = 0; i <= w + 1; i++)
		cout << "#";
	cout << endl;

	char cell;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j <= w + 1; j++) {
			if (j == 0 || j == w + 1)
				cout << "#";
			else {
				cin >> cell;
				cout << cell;
			}
		}
		cout << endl;
	}
	
	for (int i = 0; i <= w + 1; i++)
		cout << "#";
	cout << endl;
    return 0;
}
