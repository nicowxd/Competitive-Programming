#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	int n;
	cin >> n;

	vector<int> indices(3000);

	int value;
	for (int i = 0; i < n; i++) {
		cin >> value;
		indices[value] = 1;
	}

	for (int i = 1; i <= 3000; i++) {
		if (indices[i] == 0) {
			cout << i << endl;
			return 0;
		}
	}

	cout << 3001 << endl;
    return 0;
}
