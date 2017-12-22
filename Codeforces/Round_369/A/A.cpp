#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	bool can = false;
	char ans[5000];
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n*4; i+=2)
	{
		char s1, s2, s3, s4;
		scanf("%c%c", &s1, &s2);
		
		if (s1 == 'O' && s2 == 'O' && !can)
		{
			can = true;
			ans[i] = '+';
			ans[i+1] = '+';
		}
		else
		{
			ans[i] = s1;
			ans[i+1] = s2;
		}
		if (i != 2*n-1)
			scanf("%*c");
	}
	if (can)
	{
		printf("YES\n");
		for (int i = 0; i < n*4; i+=4)
			printf("%c%c|%c%c\n", ans[i], ans[i+1], ans[i+2], ans[i+3]);
	}
	else
		printf("NO\n");

	return 0;
}
