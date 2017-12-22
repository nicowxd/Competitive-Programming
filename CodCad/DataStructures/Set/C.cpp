#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, c, ans = 0;
	set<int> tacos;
	
	scanf("%d", &n);	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &c);
		if (tacos.find(c) != tacos.end())
		{
			tacos.erase(c);
		}
		else
		{
			tacos.insert(c);
			ans+= 2;
		}
	}
	
	printf("%d\n", ans);
	return 0;
}
