#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> AdjList;
 
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 10;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

	int v[3];

	for (int i = 0; i < 3; i++)
		cin >> v[i];

	sort(v, v + 3);

	int firstDiff = v[1] - v[0];
	int secondDiff = v[2] - v[1];
	
	if (firstDiff == secondDiff)
		cout << v[2] + firstDiff;
	else if (firstDiff > secondDiff)
		cout << v[0] + secondDiff;
	else
		cout << v[1] + firstDiff;

	cout << "\n";

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
