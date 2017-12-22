#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, ans = 0;
	scanf("%d", &n);	
	
	char seq[60], act;
	getchar();
	
	for (int i = 0; i < n; i++)
		scanf("%c", &seq[i]);
	
	for (int i = 0; i < n-1; i++)
	{
		if (seq[i] == seq[i+1])
			ans++;
	}
	 
	printf("%d\n", ans);
	return 0;
}
