#include <bits/stdc++.h>

using namespace std;

int main()
{

	string x;
	cin >> x;
	
	int k = x.size(), acc = 0;
	for (int i = 0; i < k; i++)
		acc += x[i] - '0';

	if (acc == 4 or acc == 8 or acc == 0)
		printf("S\n");
	else if (k >= 2)
	{
		acc = 0;
		acc += 10*(x[k-2] - '0') + x[k-1] - '0';
		if ((x[k-1] == '0' and x[k-2] == '0'))
			printf("S\n");
		else if (!(acc % 4))
			printf("S\n");
		else
			printf("N\n");
	}
	else
		printf("N\n");
	
	acc = 0;
	for (int i = 0; i < k; i++)
		acc += x[i] - '0';
	
	if (!(acc % 9) or acc == 0)
		printf("S\n");
	else
		printf("N\n");
	
	if (acc == 0)
		printf("S\n");
	else if (k >= 2)
	{
		if ((x[k-1] == '0' and x[k-2] == '0') or (x[k-1] == '5' and x[k-2] == '2') or (x[k-1] == '0' and x[k-2] == '5') or (x[k-1] == '5' and x[k-2] == '7'))
			printf("S\n");
		else
			printf("N\n");
	}
	else
		printf("N\n");
	return 0;
}
