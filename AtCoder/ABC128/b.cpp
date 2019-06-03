#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int n;
	cin >> n;
	string name;
	int score;
	vector< tuple<string, int, int> > res;
	for (int i = 0; i < n; i++) {
		cin >> name >> score;
		res.emplace_back(name, -score, i + 1);
	}
	sort(res.begin(), res.end());
	for (int i = 0; i < n; i++) {
		int id;
		tie(ignore, ignore, id) = res[i];
		cout << id << endl;
	}
    return 0;
}
