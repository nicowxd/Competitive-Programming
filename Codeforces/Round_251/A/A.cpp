#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, d, ans = 0, x, acc = 0;
	scanf("%d %d", &n, &d);	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		acc += x;
	}
	acc += (n-1)*10;
	if (acc > d)
		printf("-1\n");
	else
	{
		ans+= 2*(n-1);
		x = (d - acc)/5;
		if (x > 0)
			ans+= x;
		printf("%d\n", ans);
	}	
	return 0;
}		
