#include <bits/stdc++.h>

using namespace std;

int main()
{

	int foo, tur = 0, jp = 0;
	string s;
	
	while(cin >> s and s != "ABEND")
	{
		scanf("%d", &foo);

		if (s == "SALIDA")
		{
			jp++;
			tur += foo;
		}
		else
		{
			jp--;
			tur -= foo;
		}
	}
	
	printf("%d\n%d\n", tur, jp);
		
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
