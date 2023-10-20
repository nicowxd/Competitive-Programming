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

	int k, m;
	while(cin >> k) {
		if (k == 0)
			break;
		cin >> m;
		
		bool meet = true;
		set<int> courses;
		
		int co;
		for (int i = 0; i < k; i++) {
			cin >> co;
	   		courses.insert(co);
		}
		int x, r;
		for (int i = 0; i < m; i++) {
			cin >> x >> r;
			
			int cnt = 0, p;
			for (int j = 0; j < x; j++) {
				cin >> p;
				if (courses.find(p) != courses.end())
					cnt++;
			}
			
			if (cnt < r)
				meet = false;
		}

		if (meet)
			cout << "yes\n";
		else
			cout << "no\n";
	}	

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
