#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	while(scanf("%d", &n) != EOF)
	{
		if ((n >= 0 and n < 90) or n == 360)
			puts("Bom Dia!!");
		else if (n >= 90 and n < 180)
			puts("Boa Tarde!!");
		else if (n >= 180 and n < 270)
			puts("Boa Noite!!");
		else if (n >= 270 and n < 360)
			puts("De Madrugada!!");
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
