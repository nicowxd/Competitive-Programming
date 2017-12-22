#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, anspar, ansimpar, x, par=0, impar=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (x%2)
		{
			impar++;
			ansimpar = i+1;
		}
		else
		{
			par++;
			anspar = i+1;
		}
	}
	if (par == 1)
		printf("%d\n", anspar);
	else
		printf("%d\n", ansimpar);
	return 0;
}
