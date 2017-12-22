#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double l, a, p, r;
	cin >> l >> a >> p >> r;
	
	double esf = 4*pow(r, 2);
	double caixa = pow(l,2) + pow(a,2) + pow(p,2);
	
	if (caixa <= esf)
		cout << "S\n";
	else
		cout << "N\n";
	return 0;
}
