#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bitset<1000015> bs; 
vector<ll> primes;  

void sieve(ll upperbound) {          
  ll _sieve_size = upperbound + 1;                   
  bs.set();                                                 
  bs[0] = bs[1] = 0;                                     
  for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {
    for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
    primes.push_back((ll) i);  
} }

ll numDiv(ll N) {
  ll PF_idx = 0, PF = primes[PF_idx], ans = 1;             // start from ans = 1
  while (N != 1 && (PF * PF <= N)) {
    ll power = 0;                                             // count the power
    while (N % PF == 0) { N /= PF; power++; }
    ans *= (power + 1);                              // according to the formula
    PF = primes[++PF_idx];
  }
  if (N != 1) ans *= 2;             // (last factor has pow = 1, we add 1 to it)
  return ans;
}

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		ll n, mn = LONG_MAX, mx = 0LL;
		cin >> n;
		vector<ll> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		sort(v.begin(), v.end());
		ll target = v[0] * v[n - 1];
		sieve(sqrt(target));
		int cnt = numDiv(target) - 2;
		bool ok = true;
		for (int i = 0; i < n && ok; i++) {
			if (target % v[i] != 0) ok = false;
		}
		if (ok && cnt == n)
			cout << target << endl;
		else
			cout << -1 << endl;
	}
    return 0;
}
