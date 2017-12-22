#include <bits/stdc++.h>

using namespace std;

int main()
{

	int k, d;

	scanf("%d %d", &k, &d);

	if (d == 0 and k > 1)
		printf("No solution\n");
	else
	{
		printf("%d", d);
		
		for (int i = 0; i < k-1; i++)
			printf("0");
		printf("\n");
	}
	return 0;
}
