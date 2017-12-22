#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	
	if (a > b && a > c)
	{
		if (b > c)
			cout << "3\n2\n1\n";
		else
			cout << "2\n3\n1\n";
	}
	else if (b > a && b > c)
	{
		if (a > c)
			cout << "3\n1\n2\n";
		else
			cout << "1\n3\n2\n";
	}
	else
	{
		if (a > b)
			cout << "2\n1\n3\n";
		else
			cout << "1\n2\n3\n";
	}
	
	return 0;
}
