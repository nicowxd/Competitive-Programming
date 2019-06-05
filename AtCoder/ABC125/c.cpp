#include <cstdio>
#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>

using namespace std;

const int MAXN = (int) 1e5 + 10;

int n, t[4*MAXN];

void build(vector<int> &a, int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = gcd(t[v*2], t[v*2+1]);
    }
}

int get(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return gcd(get(v*2, tl, tm, l, min(r, tm)), get(v*2+1, tm+1, tr, max(l, tm+1), r));
}

int main()
{
		ios::sync_with_stdio(false);
	  	cin.tie(0);

		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		build(a, 1, 0, n - 1);
		int ans = 0;
		for (int i = 0; i < n; i++) {
			if (i == 0) {
				ans = max(ans, get(1, 0, n - 1, i + 1, n - 1));
			} else if (i == n - 1) {
				ans = max(ans, get(1, 0, n - 1, 0, n - 2));
			} else {
				ans = max(ans, gcd(get(1, 0, n - 1, 0, i - 1), get(1, 0, n - 1, i + 1, n - 1)));
			}
		}
		cout << ans << endl;
    return 0;
}
