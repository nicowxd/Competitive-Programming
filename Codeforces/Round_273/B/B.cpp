#include <bits/stdc++.h>

using namespace std;

long long int cmb (long long int x)
{
	long long int ans = (x*(x-1)/2);
	return ans;
}

int main()
{

	long long int n, m;
        long long int kmax, kmin;
	cin >> n >> m;
	long long int l = n-m+1;
	kmax = cmb(l);
	long long int p = n%m;
	kmin = (m-p)*cmb(n/m) + p*cmb(n/m + 1);
	cout << kmin << ' ' << kmax << endl;
	return 0;
}
