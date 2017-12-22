#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, b;
	scanf("%d %d", &a, &b);
	
	int ans = 0;
	while(true)
	{
		a*=3;
		b*=2;
		ans++;
		if (a > b)
			break;
	}
	
	printf("%d\n", ans);
	return 0;
}
