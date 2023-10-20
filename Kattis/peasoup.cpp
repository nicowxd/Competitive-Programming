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
	
	bool found = false;
	string ans = "";

	while(n--) {

		int q;
		string rest;
		
		cin >> q;
		cin.get();
		getline(cin, rest);
		
		bool soup = false, pancake = false;
		for (int i = 0; i < q; i++) {
			string item;
			getline(cin, item);
			if (item == "pea soup")
				soup = true;
			if (item == "pancakes")
				pancake = true;
		}
		if (soup && pancake && !found) {
			found = true;
			ans = rest;
		}
			
	}

	if (!found)
		cout << "Anywhere is fine I guess\n";
	else
		cout << ans << '\n';

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
