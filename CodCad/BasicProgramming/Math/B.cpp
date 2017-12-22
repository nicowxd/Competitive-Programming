#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;
	
	cout.precision(4);
	cout.setf(ios::fixed);
	
	cout << pow(x, y) << "\n";
	return 0;
}
