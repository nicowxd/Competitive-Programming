#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, l, r;
	scanf("%d", &n);
	
	int left0 = 0, left1 = 0, right0 = 0, right1 = 0; 
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &l, &r);
		if (l == 0)
			left0++;
		else
			left1++;
		
		if (r == 0)
			right0++;
		else
			right1++;
	}
	
	int ans = 0;
	if (left0 >= left1)
		ans += (n-left0);
	else
		ans+= (n-left1);
	
	if (right0 >= right1)
		ans+= (n-right0);
	else
		ans+= (n-right1);
	
	printf("%d\n", ans);

	return 0;
}
