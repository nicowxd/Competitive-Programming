#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	string x;

	scanf("%d%*c", &n);

	cin >> x;

	int ans = 0;

	for (int i = 0; i < n; i++)
	{	
		for (int j = 0; j < n; j++)
		{
			int sum = 0;
			set<int> p;
			for (int k = i; k <= j; k++)
			{
				if (isupper(x[k]))
				{
					sum = 0;
					break;
				}

				else
				{
					if (p.find(x[k]) == p.end())
					{
						sum++;
						p.insert(x[k]);
					}
				}
			}
			ans = max(ans, sum);
		}
	}
	
	printf("%d\n", ans);
	return 0;
}
