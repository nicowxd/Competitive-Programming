#include <iostream>

using namespace std;

int main()
{
	int o1, p1, b1, o2, p2, b2;
	cin >> o1 >> p1 >> b1 >> o2 >> p2 >> b2;
	
	if (o1 > o2)
		cout << "A\n";
	else if (o1 < o2)
		cout << "B\n";
	else
	{
		if (p1 > p2)
			cout << "A\n";
		else if (p1 < p2)
			cout << "B\n";
		else
		{
			if (b1 > b2)
				cout << "A\n";
			else
				cout << "B\n";
		}
	}
		
	return 0;
}
