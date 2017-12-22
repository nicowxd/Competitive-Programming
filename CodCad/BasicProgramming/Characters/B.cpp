#include <iostream>

using namespace std;

int main()
{
	int n, x, y;
	char op;
	
	cin >> n;
	cin >> x >> op >> y;
	
	if (op == '*')
		x = x * y;
	else
		x = x + y;
	
	if (x > n)
		cout << "OVERFLOW\n";
	else
		cout << "OK\n";
	
	return 0;
}
