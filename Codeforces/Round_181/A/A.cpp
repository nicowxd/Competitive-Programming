#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[110], n1[110], n2[110], n3[110], odd = 0, even = 0;
	scanf("%d", &n);

	for (int i = 0; i < n ; i++)
	{
		scanf("%d", v+i);
		if (v[i] < 0)
			odd++;
		if (v[i] > 0)
			even++;
	}

	int first = 0, t1 = 0, t2 = 0, t3 = 0;
	if (odd % 2)
	{
		for (int i = 0; i < n; i++)
		{
			if (v[i] < 0)
			{
				if (first == 0)
				{
					first = 1;
					n1[t1++] = v[i];
				}
				else
					n2[t2++] = v[i];
			}
			if (v[i] == 0)
				n3[t3++] = v[i];
			if (v[i] > 0)
				n2[t2++] = v[i];
		}
	}
	else
	{
		if (even)
		{
			for (int i = 0; i < n; i++)
			{
				if (v[i] < 0)
				{
					if (first == 0)
					{
						n1[t1++] = v[i];
						first = 1;
					}
					else
						n3[t3++] = v[i];
				}
				if (v[i] == 0)
					n3[t3++] = v[i];
				if (v[i] > 0)
					n2[t2++] = v[i];
			}
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				if (v[i] < 0)
				{
					if (first == 0)
					{
						n1[t1++] = v[i];
						first++;
					}
					else if (first != 3)
					{
						n2[t2++] = v[i];
						first++;
					}
					else
						n3[t3++] = v[i];
				}
				if (v[i] == 0)
					n3[t3++] = v[i];
			}
		}
	}
	printf("%d", t1);
	for (int i = 0; i < t1; i++)
		printf(" %d", n1[i]);
	
	printf("\n%d", t2);
	for (int i = 0; i < t2; i++)
		printf(" %d", n2[i]);

	printf("\n%d", t3);
	for (int i = 0; i < t3; i++)
		printf(" %d", n3[i]);
	printf("\n");
	return 0;
}
