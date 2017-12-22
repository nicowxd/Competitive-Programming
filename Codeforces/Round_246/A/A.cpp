#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, vet[2010], ans=0;
	scanf("%d %d", &n, &k);	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &vet[i]);
	}
	sort(vet, vet+n);
	for (int i = 2; ; i+=3)
	{
		if (vet[i] + k <= 5 && i <= n-1)
			ans++;
		else
			break;
	}
	printf("%d\n", ans);
	return 0;
}
