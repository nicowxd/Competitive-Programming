#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[110] = {0}, x;	
	vector<int> dist;
	set<int> k;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		dist.push_back(x);
		k.insert(x);
		v[x]++;
	}

	if ((int) k.size() != 2)
		puts("NO");
	else
	{
		int f, s;
		for (set<int>::iterator it = k.begin(); it != k.end(); it++)
		{
			if (it == k.begin())
				f = (*it);
			else
				s = (*it);
		}
		
		if (v[f] != v[s])
			puts("NO");
		else
		{
			printf("YES\n");
			printf("%d %d\n", f, s);
		}
	}
			
	return 0;
}
