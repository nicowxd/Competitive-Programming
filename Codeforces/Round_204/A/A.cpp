#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, x, v[10] = {0};
	scanf("%d", &n);
		
	while(n--)
	{
		scanf("%d", &x);	
		v[x]++;
	}
	
	if (v[0] == 0)
		printf("-1\n");
	else if (v[5] < 9)
		printf("0\n");
	else
	{
		int ans = v[5]/9;
		for (int i = 0; i < ans*9; i++)
			printf("5");
		for (int i = 0; i < v[0]; i++)
			printf("0");
		printf("\n");
	}
	return 0;
}
