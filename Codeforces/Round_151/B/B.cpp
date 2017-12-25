#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n, v[112345], sum = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", v+i);
		sum += v[i];
	}
	
	if (sum % n == 0)
		printf("%d\n", n);
	else
		printf("%d\n", n - 1);
	return 0;
}
