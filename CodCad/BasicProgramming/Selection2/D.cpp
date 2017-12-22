#include <iostream>

using namespace std;

int main()
{
	int cv, ce, cs, fv, fe, fs;
	cin >> cv >> ce >> cs >> fv >> fe >> fs;
	
	int ptC, ptF;
	ptC = cv*3 + ce;	
	ptF = fv*3 + fe;
	
	if (ptC > ptF)
		cout << "C\n";
	else if (ptC < ptF)
		cout << "F\n";
	else
	{
		if (cs > fs)
			cout << "C\n";
		else if (cs < fs)
			cout << "F\n";
		else
			cout << "=\n";

	}
	
	return 0;
}
