#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, c=0, bi=0, ba=0, train;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &train);
		if (i%3 == 0)
			c+= train;
		else if (i % 3 == 1)
			bi+=train;
		else
			ba+= train;
	}
	int maior = max(c, max(bi, ba));
	if (maior == c)
		printf("chest\n");
	else if (maior == bi)
		printf("biceps\n");
	else
		printf("back\n");
			
	return 0;
}
