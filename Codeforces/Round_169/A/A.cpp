#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, k, maior=-1e9, f, t;
	scanf("%d %d", &n, &k);
		
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &f, &t);
		if (t > k)
			maior = max(maior, f-(t-k));
		else
			maior = max(maior, f);
	}
	printf("%d\n", maior);
	
	return 0;
}
