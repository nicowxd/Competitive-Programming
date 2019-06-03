#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll INF = 1e9L;

string reverse_op(string op) {
	if (op == "<")
		return ">=";
	else if (op == "<=")
		return ">";
	else if (op == ">")
		return "<=";
	else
		return "<";
}

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	int n;
	cin >> n;

	ll num;
	string op;
	char out;
	bool impossible = false;

	ll l = -INF - 1, r = INF + 1;
	for (int i = 0; i < n; i++) {
		ll new_l, new_r;
		cin >> op >> num >> out;
		if (out == 'N')
			op = reverse_op(op);
		
		if (op == "<") {
			new_r = num - 1;
			r = min(r, new_r);
		}
		else if (op == "<=") {
			new_r = num;
			r = min(r, new_r);
		}
		else if (op == ">=") {
			new_l = num;
			l = max(l, new_l);
		} else {
			new_l = num + 1;
			l = max(l, new_l);
		}
		
		if (r < l)
			impossible = true;
	}
	
	if (impossible || l > 2*INF || l < -2*INF)
		cout << "Impossible\n";
	else
		cout << l << endl;

    return 0;
}
