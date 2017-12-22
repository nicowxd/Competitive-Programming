#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, ans = 0;
	scanf("%d", &n);
	while(n--)
	{
		char stat[5];
		scanf("%s", stat);
		
		int tam = strlen(stat);
	
		for (int i = 0; i < tam; i++)
		{
			if (stat[i] == '+')
			{
				ans++;
				break;
			}
			if (stat[i] == '-')
			{
				ans--;
				break;
			}
		}
	}
	printf("%d\n", ans);
				
		
	return 0;
}
