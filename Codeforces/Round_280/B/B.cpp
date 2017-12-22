#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n, l, a[1010];
	scanf("%d %d", &n, &l);
	for (int i = 0; i < n; i++)
		scanf("%d", a+i);	
	
	sort(a, a+n);
	double maior = max(a[0] - 0, l-a[n-1]);
	for (int i = 1; i < n; i++)
		maior = max(maior, (double) (a[i]-a[i-1])/2); 
	printf("%lf\n", maior);
	return 0;
}
