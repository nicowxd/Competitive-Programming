#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	cout.precision(4);
	cout.setf(ios::fixed);

	while(n--)
	{
		double x;
		cin >> x;
		cout << sqrt(x) << "\n";
	}
	return 0;
}
