#include <bits/stdc++.h>

using namespace std;

int main()
{

	char n[212345];
	scanf("%s", n);
	
	int tam = strlen(n), ans = -1, lastPar = -1;
	
	for (int i = 0; i < (tam - 1); i++)
	{
		if ((n[i] - '0') % 2 == 0)
		{
			lastPar = i;
			if (n[i] < n[tam-1])
			{
				ans = i;
				break;
			}
		}
	}
		
	if (ans == -1)
		ans = lastPar;
	if (lastPar == -1)
		puts("-1");
	else
	{
		swap(n[tam-1], n[ans]);
		puts(n);
	}
	return 0;
}
