#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int h, p, f, d;
	cin >> h >> p >> f >> d;
	
	if (d == -1)
	{
		if ((f - h) > 0 and (f - p) < 0)
			cout << "S\n";
		else if ((f - h) < 0 and (f - p) > 0)
			cout << "N\n";
		else
		{
			if ((f - h) > (f - p))
				cout << "N\n";
			else
				cout << "S\n";
		}
	}
	else
	{
		if ((f - h) < 0 and (f - p) > 0)
			cout << "S\n";
		else if ((f - h) > 0 and (f - p) < 0)
			cout << "N\n";
		else
		{
			if ((f - h) > (f - p))
				cout << "S\n";
			else
				cout << "N\n";
		}
	}
	
	return 0;
}
