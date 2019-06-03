#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int n; 
	cin >> n;

	for (int i = 0; i < n; i++) {
		if (i&1)
			cout << "I love ";
		else
			cout << "I hate ";

		if (i == n - 1)
			cout << "it" << endl;
		else
			cout << "that ";
	}
    return 0;
}
