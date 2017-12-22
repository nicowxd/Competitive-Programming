#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, x, sum = 0;
	bool hasOdd = false;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		sum += x;

		if (x&1)
			hasOdd = true;
	}

	if (sum&1)
		printf("First\n");
	else
	{
		if (!hasOdd)
			printf("Second\n");
		else
			printf("First\n");
	}
	return 0;
}
