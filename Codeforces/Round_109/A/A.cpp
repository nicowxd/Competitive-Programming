#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, x, ans = 0, maior = 0, menor = 1e9;
	scanf("%d", &n);
	scanf("%d", &x);
	
	maior = x;
	menor = x;
	
	for (int i = 1; i < n; i++)
	{
		scanf("%d", &x);
		if (x > maior)
		{
			maior = x;
			ans++;
		}
		if (x < menor)
		{
			menor = x;
			ans++;
		}
	}
	
	printf("%d\n", ans);
	return 0;
}
