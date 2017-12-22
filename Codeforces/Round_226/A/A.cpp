#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, c, price[100];
	scanf("%d %d", &n, &c);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &price[i]);
	}
	
	int maior = 0;
	
	for (int i = 0; i < n-1; i++)
	{
		maior = max(maior, price[i]-price[i+1]);
	}
	
	printf("%d\n", maior-c >= 0? maior-c : 0); 
	return 0;
}
