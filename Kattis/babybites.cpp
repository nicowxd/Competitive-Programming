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

	int n;
	cin >> n;
	
	bool sense = true;
	for (int i = 1; i <= n; i++) {
		string s;
		cin >> s;

		if (s != "mumble") {
			int j = stoi(s);
			if (j != i) 
				sense = false;
		}
	}
	cout << (sense ? "makes sense\n" : "something is fishy\n");

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
