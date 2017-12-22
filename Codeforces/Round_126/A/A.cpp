#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, pi, acc = 0;	
	double ans;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &pi);	
		acc += pi;
	}
	
	ans = (double) acc/n;
	
	printf("%lf\n", ans);

	
	return 0;
}
