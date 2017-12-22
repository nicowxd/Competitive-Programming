#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m, a[1234], v[1234];
	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++)
		scanf("%d", v+i);
	for (int i = 0; i < m; i++)
		a[i] = v[i];

	int maxans = 0, minans = 0;	
	
	for (int i = 0; i < n; i++)
	{
		int big = 1, les = 1e9, idbig, idles;
		for (int j = 0; j < m; j++)
		{
			if (a[j] > big)
			{
				big = a[j];
				idbig = j;
			}
			if (v[j] < les and v[j] > 0)
			{
				les = v[j];
				idles = j;
			}
		}
		

		a[idbig]--; 
		v[idles]--;

		maxans += big;
		minans += les;
	}
	
	
	printf("%d %d\n", maxans, minans);
	return 0;
}
