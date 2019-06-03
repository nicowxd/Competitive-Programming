#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 1005;
const ll INF = 1e18L + 5;



int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int N, M;
	cin >> N >> M;

	int a, b;
	ll c;
	vector< pair<int, ll> > adj[MAXN];
	for (int i = 0; i < M; i++) {
		cin >> a >> b >> c;
		a--, b--;
		adj[a].push_back(make_pair(b, c));
	}
	
	vector<ll> dist(MAXN, -INF);
	dist[0] = 0;
			
	for (int loop = 0; loop < N - 1; loop++) {
		for (int u = 0; u < N; u++) {
			for (auto v : adj[u])
				dist[v.first] = max(dist[v.first], dist[u] + v.second);
		}
	}

	ll ans = dist[N-1];
	
	for (int loop = 0; loop < N - 1; loop++) {
		for (int u = 0; u < N; u++) {
			for (auto v : adj[u])
				dist[v.first] = max(dist[v.first], dist[u] + v.second);
		}
	}
	
	if (dist[N-1] != ans)
		cout << "inf\n";
	else
		cout << ans << '\n';
	return 0;
}
