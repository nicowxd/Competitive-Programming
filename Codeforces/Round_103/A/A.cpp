#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, vet[110], maior = -1, menor = 1e9, posmenor, posmaior;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &vet[i]);
		if (vet[i] > maior)
		{
			maior = vet[i];
			posmaior = i;
		}
		if (vet[i] <= menor)
		{
			menor = vet[i];
			posmenor = i;
		}
	}
	int ans;
	ans = posmaior > posmenor ? posmaior + ((n-1)-posmenor) - 1 : posmaior + ((n-1)-posmenor);
	printf("%d\n", ans);
	return 0;
}
		
		
