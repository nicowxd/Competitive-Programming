#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, height[110], menor = 1e5;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++)
		scanf("%d", height+i);

	for (int i = 2; i < n; i++)
	{
		int maior = 0;
		for (int j = 1; j < n; j++)
		{
			if (j+1 == i)
			{
				maior = max(maior, height[j+2]-height[j]);
				j++;
			}
			else
				maior = max(maior, height[j+1]-height[j]);
		} 
		menor = min(menor, maior);
	}
			
	printf("%d\n", menor);
	return 0;
}
