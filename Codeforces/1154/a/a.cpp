#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	vector<int> values(4);

	for (int i = 0; i < 4; i++)
		cin >> values[i];

	sort(values.begin(), values.end());

	int c = values[3] - values[0];
	int a = values[1] - c;
	int b = values[2] - c;

	cout << a << " " << b << " " << c << '\n';
    return 0;
}
