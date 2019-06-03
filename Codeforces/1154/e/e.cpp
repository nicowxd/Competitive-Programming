#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int n, k, skill;
	cin >> n >> k;

	vector< pair<int, int> > a(n);

	for (int i = 0; i < n; i++) { 
		cin >> skill;
		a[i].first = skill;
		a[i].second = i;
	}

	sort(a.rbegin(), a.rend());

	set<int> not_taken;
	queue<int> order;
	
	for (int i = 0; i < n; i++) {
		not_taken.insert(i);
		order.push(a[i].second);
	}

	int turn = 1;
	vector<int> ans(n);

	while(!not_taken.empty()) {
		while(!not_taken.count(order.front()))
			order.pop();

		int chosen = order.front();
		order.pop();

		auto it = not_taken.find(chosen);
		
		vector<int> pos;

		for (int i = 0; i <= k; i++) {
			pos.push_back(*it);
			if (it == not_taken.begin()) break;
			it--;
		}
		
		it = next(not_taken.find(chosen));

		for (int i = 0; i < k; i++) {
			if (it == not_taken.end()) break;
			pos.push_back(*it);
			it++;
		}
		
		for (auto take_out : pos) {
			if (turn & 1) ans[take_out] = 1;
			else ans[take_out] = 2;
			not_taken.erase(take_out);	
		}

		turn++;
	}
	
	for (int i = 0; i < n; i++)
		cout << ans[i];
	cout << '\n';

	return 0;
}
