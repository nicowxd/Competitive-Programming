#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d", &n);
	
	int a[n];
	for (int i = 0; i < n; i++)
		scanf("%d", a+i);
	
	int i;
	for (i = 1; i < n && a[i] > a[i-1]; i++);

	if (i == n)
	{
		printf("yes\n1 1\n");
		return 0;
	}
	
	else
	{
		int j;
		for (j = i+1; j < n && a[j-1] > a[j]; j++);
		reverse(a+i-1, a+j);
		
		int x;
		for (x = 1; x < n && a[x] > a[x-1]; x++);

		if (x == n)
			printf("yes\n%d %d\n", i, j);
		else
			printf("no\n");
	} 
		 
	return 0;
}
