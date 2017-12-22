#include <iostream>

using namespace std;

int main()
{
	char op;
	double x, y;
	cin >> op;
	cin >> x >> y;

	cout.precision(2);
	cout.setf(ios::fixed);

	if (op == 'M')
		cout << x * y << "\n";
	else
		cout << x / y << "\n";
	return 0;
} 
