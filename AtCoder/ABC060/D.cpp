#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	ll N, W;
	cin >> N >> W;
	
	vector< pair<ll, ll> > obj(N);
	vector<ll> a, b, c, d;

	for (ll i = 0; i < N; i++)
		cin >> obj[i].first >> obj[i].second;
	
	sort(obj.begin(), obj.end());
	ll w1 = obj[0].first;
	for (ll i = 0; i < N; i++) {
		if (obj[i].first == w1) 
			a.push_back(obj[i].second);
		else if (obj[i].first == w1 + 1)
			b.push_back(obj[i].second);
		else if (obj[i].first == w1 + 2)
			c.push_back(obj[i].second);
		else
			d.push_back(obj[i].second);
	}
	
	sort(a.rbegin(), a.rend());
	sort(b.rbegin(), b.rend());
	sort(c.rbegin(), c.rend());
	sort(d.rbegin(), d.rend());

	for (ll i = 1; i < (ll) a.size(); i++)
		a[i] += a[i-1];
	for (ll i = 1; i < (ll) b.size(); i++)
		b[i] += b[i-1];
	for (ll i = 1; i < (ll) c.size(); i++)
		c[i] += c[i-1];
	for (ll i = 1; i < (ll) d.size(); i++)
		d[i] += d[i-1];
    
	ll ans = 0;
	for (ll i = 0; i <= (ll) a.size(); i++) {
		for (ll j = 0; j <= (ll) b.size(); j++) {
			for (ll k = 0; k <= (ll) c.size(); k++) {
				ll cur_weight = w1*i + (w1+1)*j + (w1+2)*k;
				if (cur_weight > W) 
					continue;
				ll l = (W - cur_weight) / (w1+3);
				if ((ll) d.size() < l)
					l = (ll) d.size();	
				ll cur_value = 0;
				if (i != 0)
					cur_value += a[i - 1];
				if (j != 0)
					cur_value += b[j - 1];
				if (k != 0)
					cur_value += c[k - 1];
				if (l != 0)
					cur_value += d[l - 1];
				ans = max(ans, cur_value);
			}
		}
	}

	cout << ans << endl;
			
	


	return 0;
}
