#include <iostream>

using namespace std;

int main()
{
	int h1, m1, h2, m2;
	while(cin >> h1 >> m1 >> h2 >> m2)
	{
		if (h1 == 0 and m1 == 0 and h2 == 0 and m2 == 0)
			break;
		if (h1 == 0)
			h1 = 24;
		if (h2 == 0)
			h2 = 24;
		int tot1 = h1*60 + m1;
		int tot2 = h2*60 + m2;
		
		if (tot1 > tot2)
			cout << 1440 - (tot1 - tot2) << "\n";
		else
			cout << tot2 - tot1 << "\n";
	}
	return 0;
}
