#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> AdjList;
 
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 10;

int reverse(int s) {
	int a = 0;

	while(s) {
		int lastNum = s % 10;
		a = a * 10 + lastNum;
		s /= 10;
	}

	return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

	int a, b;
	cin >> a >> b;
	
	int numA = reverse(a);
	int numB = reverse(b);

	if (numB > numA)
		swap(numB, numA);

	cout << numA << '\n';

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}