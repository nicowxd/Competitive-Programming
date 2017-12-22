#include <bits/stdc++.h>

using namespace std;

int main()
{

	long long int n, k;
	cin >> n >> k;

	long long int win = (n >> 1);
	long long int a = win / (1 + k);
	long long int b = a * k;

	cout << a << " " << b << " " << n - (a+b) << endl;
	return 0;
}
