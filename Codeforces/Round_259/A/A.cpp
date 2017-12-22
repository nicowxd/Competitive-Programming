#include <bits/stdc++.h>

using namespace std;

int main()
{


	int n;
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == n/2 or j == n/2)
				printf("D");
			else if (i < n/2 and ((j < n/2 - i) or (j > n/2 + i)))
				printf("*");
			else if (i > n/2 and ((j < n/2 - (n-i-1)) or (j > n/2 + (n-i-1))))
				printf("*");
			else
				printf("D");
		}
		printf("\n");
	}


	return 0;
}
