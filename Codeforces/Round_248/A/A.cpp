#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, x, one = 0, two = 0, sum = 0;
	
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (x == 100)
			one++;
		if (x == 200)
			two++;
		sum += x;
	}

	int ans = sum/2;
	if ((sum/100)&1 or n == 1)
		puts("NO");
	else
	{
		int k = ans/200;
		if (k == 0)
			puts("YES");
		else
		{
			ans -= k*200;
			if (ans/100 <= one)
				puts("YES");
			else
				puts("NO");
		}
	}
	return 0;
}
