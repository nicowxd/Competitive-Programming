#include <bits/stdc++.h>

using namespace std;

bool isodd(int val)
{
	return val&1;
}

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	int n;
	cin >> n;
	
	int val, low = 200, high = -1;
	set<int> st;

	for (int i = 0; i < n; i++) {
		cin >> val;
		if (val < low) low = val;
		if (val > high) high = val;
		st.insert(val);
	}
	
	int len = (int) st.size();
	if (len == 1) {
		cout << 0 << endl;
	} else if (len == 2) {
		if ((low + high) & 1)
			cout << high - low << endl;
		else
			cout << (high - low) / 2 << endl;
	} else if (len == 3) {
		if ((low + high) & 1)
			cout << -1 << endl;
		else {
			auto it = st.find(low + (high - low) / 2);
			if (it == st.end())
				cout << -1 << endl;
			else
				cout << (high - low) / 2 << endl;
		}
	} else {
		cout << -1 << endl;
	}
		
    return 0;
}
