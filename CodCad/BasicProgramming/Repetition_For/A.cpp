#include <iostream>

using namespace std;

int main()
{
	int p, n, val;
	cin >> p >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> val;
		p = p + val;
		if (p > 100)
			p = 100;
		if (p < 0)
			p = 0;
	}

	cout << p << "\n";
	return 0;
}
