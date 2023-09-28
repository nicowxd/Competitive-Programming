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

	string one = ".*..*..*..*..*.";
	string two = "***..*****..***";
	string three = "***..****..****";
	
	int n; 
	cin >> n;
	
	string s[50];
	for (int i = 0; i < n; i++)
		s[i] = "";

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < 4; k++) {
				char c;
				cin >> c;
				if (k != 3)
					s[j] += c;
			}
		}
	}	
	
	for (int i = 0; i < n; i++) {
		if (s[i] == one)
			cout << "1";
		else if (s[i] == two)
			cout << "2";
		else
			cout << "3";
	}
	
	cout << "\n";

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
