#include <bits/stdc++.h>

using namespace std;

int main()
{

	string x;
	cin >> x;
	
	int k = 1, spi = 0, spp = 0, ans = 0, tam = x.size();
	
	while (tam != 0)
	{	
		if (!(k % 2))
			spp += x[x.size()-k] - '0';
		else
			spi += x[x.size()-k] - '0';
		k++;
		tam--;
	}
	if (spi >= spp)
		ans = spi - spp;
	else
	{
		k = spp - spi;
		if ((k / 11 == 0) and !(k % 11))
			spi += 11*(k/11);
		else
			spi += 11* ((k/11) + 1);
		ans = spi - spp;
	}
	if (!(ans % 11))
		printf("S\n");
	else
		printf("N\n");
	return 0;
}
