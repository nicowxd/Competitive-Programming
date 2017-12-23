#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d", &n);

	int start = 10000001 - n;
	
	for (int i = start; i <= 10000000; i++)
		printf("%d ", i);
	printf("\n");

	return 0;
}
