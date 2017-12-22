#include <iostream>

using namespace std;

int main()
{
	int b, n, d, c, val, banco[30];
	while(cin >> b >> n)
	{
		bool deve = false;
		if (b == 0 and n == 0)
			break;

		for (int i = 1; i <= b; i++)
			cin >> banco[i];
	
		for (int i = 0; i < n; i++)
		{
			cin >> d >> c >> val;
			banco[d] = banco[d] - val;
			banco[c] = banco[c] + val;
		}
	
		for (int i = 1; i <= b and !deve; i++)
		{
			if (banco[i] < 0)
				deve = true;
		}	

		if (deve)
			cout << "N\n";
		else
			cout << "S\n";
	}
	return 0;
}
	
