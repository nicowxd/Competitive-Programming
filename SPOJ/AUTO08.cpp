#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d", &n);
	
	char bl;
	int ans = 0;
	getchar();
	for (int i = 0; i < n; i++)
	{
		scanf("%c", &bl);
		if (bl == 'P')
			ans+= 2;
		else if (bl == 'C')
			ans+= 2;
		else if (bl == 'A')
			ans+= 1;
	}
	printf("%d\n", ans);
	return 0;
}
