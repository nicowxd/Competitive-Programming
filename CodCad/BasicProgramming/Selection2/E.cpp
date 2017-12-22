#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	
	if (a == b and b == c)
		cout << "*\n";
	else if (a == b and b != c)
		cout << "C\n";
	else if (a == c and a != b)
		cout << "B\n";
	else if (b == c and b != a)
		cout << "A\n";
	
	return 0;
}
