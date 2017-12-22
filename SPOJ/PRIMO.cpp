#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d", &n);
	
	if (n < 0)
		n = -n;
	
	for (int i = 2; i <= sqrt(n); i++)	
	{
		if ((n%i) == 0)
		{
			printf("nao\n");
			return 0;
		}
	}
	printf("sim\n");

	return 0;
}
