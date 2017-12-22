#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	
	if (a == b)
		cout << "S\n";
	else if (a == c)
		cout << "S\n";
	else if (b == c)
		cout << "S\n";
	else if ((a + b) == c)
		cout << "S\n";
	else if ((a + c) == b)
		cout << "S\n";
	else if ((b + c) == a)
		cout << "S\n";
	else
		cout << "N\n";
	
	return 0;
}
